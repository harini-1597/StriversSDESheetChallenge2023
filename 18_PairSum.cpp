// Basically Two Sum, but you have to return all pairs, not just  one

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> ans; 
   int n=arr.size();
   sort(arr.begin(), arr.end());
   for(int i=0; i<n; i++){
      vector<int> temp; 
      for(int j=i+1; j<n; j++){
         if((arr[i]+arr[j])==s){
            temp.push_back(arr[i]);
            temp.push_back(arr[j]);
            ans.push_back(temp);
         }
         if(arr[i]+arr[j] > s)
            break;
      }
   }
   return ans;
}
