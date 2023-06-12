pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int> ans; int i=0; unordered_set<int> set; 
	for(i; i<n; i++){
		if(set.find(arr[i])!=set.end())
			break;
		else
			set.insert(arr[i]);
	}
	ans.second=arr[i];
	int sum=0; int sumofn=(n*(n+1))/2; 
	for(int j=0; j<n; j++){
		sum+=arr[j];
	}
	sum=sum-ans.second;
	int diff=sumofn-sum;
	ans.first=diff;
	return ans;
}
