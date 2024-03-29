//https://leetcode.com/problems/search-insert-position/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (nums[0]>=target) return 0;
        for (int i=1; i<nums.size(); i++)
            if (nums[i-1]<=target&&nums[i]>=target)
                return i;
        return nums.size();
    }
};