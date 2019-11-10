//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()==0) return 0;
        int res=0;
        for (int j=0; j<nums.size(); j++){
            if (nums[j]!=nums[res]) res++;
            nums[res]=nums[j];
        }
        return res+1;
    }
};