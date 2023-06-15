int merge(vector<int> &arr, int l, int r, int m){
  int count=0;
  int n1=m-l+1;
  int n2=r-m;
  vector<int> left(n1), right(n2); int i,j,k;
  for(i=0; i<n1; i++)
    left[i]=arr[l+i];
  for(j=0; j<n2; j++)
    right[j]=arr[m+1+j];
  i=j=0; k=l;
  while(i<n1 && j<n2){
    if(left[i] <= right[j]){
      arr[k]=left[i];
      i++;
    }
    else{
      arr[k]=right[j];
      j++;
      count+=n1-i;
    }
    k++;
  }
  while(i<n1){
    arr[k]=left[i];
    i++;
    k++;
  }
  while(j<n2){
    arr[k]=right[j];
    j++;
    k++;
  }
  return count;
}

int mergeSort(vector<int> &arr, int l, int r){
  int count=0;
  if(l>=r) return count;
  int mid=l+(r-l)/2;
  count+=mergeSort(arr,l,mid);
  count+=mergeSort(arr,mid+1,r);
  count+=merge(arr,l,r,mid);
  return count;
}

int numberOfInversions(vector<int>&a, int n) {
    return mergeSort(a,0,n-1);
}
