// LC 75 Sort Colors https://leetcode.com/problems/sort-colors/description/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0,c1,c2; c0=c1=c2=0; int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==0){c0++;}
            if(nums[i]==1){c1++;}
            if(nums[i]==2){c2++;}
        }
        for(int i=0; i<c0; i++)
            nums[i]=0;
        for(int i=c0; i<(c0+c1); i++)
            nums[i]=1;
        for(int i=(c0+c1); i<n; i++)
            nums[i]=2;
    }
};
