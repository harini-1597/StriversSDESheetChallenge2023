int LongestSubsetWithZeroSum(vector <int> arr) {
    unordered_map<int,int> map;
    int n=arr.size();
    int maxLen=0; int sum=0;
    for(int i=0; i<n; i++){
      sum+=arr[i];
      if(sum==0) maxLen=i+1;
      else if(map.find(sum)!=map.end()) maxLen=max(maxLen,i-map[sum]);
      else map[sum]=i;
    }
    return maxLen;
}
