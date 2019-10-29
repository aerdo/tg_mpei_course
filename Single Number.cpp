//https://leetcode.com/problems/single-number/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for (int i=0; i<nums.size(); i++)
            ans^=nums[i]; //XOR a^a=0,  a^0=a, a^b^a=(a^a)^b=0^b=b
        //те если применить XOR ко всем значениям, дубликаты схлопнутся, уникальный останется
        return ans;
    }
};