class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> set; int i=0;
        for(i; i<nums.size(); i++){
            if(set.find(nums[i])!=set.end())
                break;
            else
                set.insert(nums[i]);
        }
        return(nums[i]);
    }
};
