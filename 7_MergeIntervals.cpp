// LC 56 https://leetcode.com/problems/merge-intervals/description/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end()); vector<vector<int>> ans; int i;
        for(i=0; i<arr.size()-1; i++){
            if(arr[i+1][0]>arr[i][1]){
                ans.push_back(arr[i]);
                continue;
            }
            arr[i+1][0]=arr[i][0];
            arr[i+1][1]=max(arr[i][1],arr[i+1][1]);
        }
        ans.push_back(arr[i]);
        return ans;
    }
};
