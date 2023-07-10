void merge(vector<int> &arr, int l, int r, int m){
	int n1 = m-l+1;
	int n2 = r-m;
	int i,j,k;
	vector<int> left(n1); vector<int> right(n2);
	for(i=0; i<n1; i++)
		left[i] = arr[l+i];
	for(j=0; j<n2; j++)
		right[j] = arr[m+1+j];
	i=j=0; k=l;
	while(i<n1 && j<n2){
		if(left[i] <= right[j]){
			arr[k]=left[i];
			i++;
		}
		else{
			arr[k]=right[j];
			j++;
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
}

int countPairs(vector<int> &arr, int low, int mid, int high){
	int right=mid+1;
	int count=0;
	for(int i=low; i<=mid; i++){
		while(right<=high && arr[i]>2*arr[right])
			right++;
		count += (right-(mid+1));
	}
	return count;
}

int mergeSort(vector<int> &a, int l, int r){
	int count=0; 
	if( l>=r ) return count;
	int mid=l+(r-l)/2;
	count+=mergeSort(a,l,mid);
	count+=mergeSort(a,mid+1,r);
	count+=countPairs(a,l,mid,r);
	merge(a,l,r,mid);
	return count;
}
int reversePairs(vector<int> &arr, int n){
	return mergeSort(arr,0,n-1);	
}
