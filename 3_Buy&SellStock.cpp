// LC 121 https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int profitNow=0; int maxProfit=INT_MIN;
        int n=nums.size();
        int buy=nums[0]; 
        for(int i=0; i<n; i++){
            profitNow=nums[i]-buy;
            if(profitNow > maxProfit)
                maxProfit=profitNow;
            if(nums[i] < buy)
                buy=nums[i];
        }
        return maxProfit;
    }
};
