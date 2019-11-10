//https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxSum=INT_MIN;
        for (int l=0; l<n; l++) {
            int sum=0;
            for (int r=l; r<n; r++) {
                sum+=nums[r];
                maxSum=max(maxSum, sum);
            }
        }
    return maxSum;   
    }
};