//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        if (nums.size()==0) return nums;
        vector<int> res;
        
        for (int i=0; i<nums.size(); i++)      //
            while (nums[nums[i]-1]!=nums[i])   //ставит элементы на места с индексом равным их значениям
                swap(nums[i], nums[nums[i]-1]);// nums[i]=i+1;
        
        for (int i=0; i<nums.size(); i++) 
            if (nums[i]!=i+1) 
                res.push_back(i+1);
        
        return res;
    }
};