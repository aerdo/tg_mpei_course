//https://leetcode.com/problems/missing-number/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sumExpected=nums.size()*(nums.size()+1)/2,sumGiven=0;
        for (int i=0; i<nums.size(); i++)
            sumGiven+=nums[i];
        return abs(sumExpected-sumGiven);
    }
};