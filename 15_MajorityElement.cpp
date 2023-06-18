class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(); unordered_map<int,int> map;
        for(int i=0; i<n ;i++){
            if(map.count(nums[i]))
                map[nums[i]]++;
            else
                map[nums[i]]=1;
        }
        int x=0;
        for(int i=0; i<n; i++){
            if(map[nums[i]] > n/2){
                x=nums[i];
                break;
            }       
        }
        return x;
    }
};
