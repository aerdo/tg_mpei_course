//https://leetcode.com/problems/binary-search/
class Solution {
public
    int search(vectorint& nums, int target) {
        int p, l=0, r=nums.size()-1;
        while (l=r){
            p=l+(r-l)2;
            if (nums[p]==target) 
                return p;
            else if (nums[p]target) 
                r=p-1;
            else 
                l=p+1;
        }
        return -1;
    }
};