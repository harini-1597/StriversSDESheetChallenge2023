class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> map; int counter=0;
        vector<int> ans;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(map.count(nums[i]))
                map[nums[i]]++;
            else
                map[nums[i]]=1;
        }
        for(int i=0; i<n; i++){
            if(map[nums[i]] > n/3){
                ans.push_back(nums[i]);
                map.erase(nums[i]);
            }
        }
        return ans;
    }
};
