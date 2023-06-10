//53 LC https://leetcode.com/problems/maximum-subarray/description/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum=0; int maxSum=INT_MIN;
        int n=nums.size();
        for(int i=0; i<n; i++){
            currentSum+=nums[i];
            if(currentSum > maxSum)
                maxSum=currentSum;
            if(currentSum < 0)
                currentSum=0;
        }
        return maxSum;
    }
};

// CN CODESTUDIO 0 INSTEAD OF INT_MIN
long long maxSubarraySum(int nums[], int n)
{
        long currentSum=0; long maxSum=0;
        for(int i=0; i<n; i++){
            currentSum+=nums[i];
            if(currentSum > maxSum)
                maxSum=currentSum;
            if(currentSum < 0)
                currentSum=0;
        }
        return maxSum;
}
