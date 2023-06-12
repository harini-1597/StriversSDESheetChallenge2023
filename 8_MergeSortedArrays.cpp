vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	int x=(m+n);
	vector<int> arr;
	int i1=0,i2=0;
	while(i1<m && i2<n){
		if(arr1[i1] < arr2[i2]){
			arr.push_back(arr1[i1]);
			i1++;
		}
		else{
			arr.push_back(arr2[i2]);
			i2++;
		}
	}
	while(i1<m){
		arr.push_back(arr1[i1]);
		i1++;
	}
	while(i2<n){
		arr.push_back(arr2[i2]);
		i2++;
	}
	for(int i=0; i<x; i++)
		arr1[i]=arr[i];
	return arr1;
}
