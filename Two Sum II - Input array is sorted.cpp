//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int b=0, e=numbers.size()-1;
        while (b<e){
            if (numbers[b]+numbers[e]>target) e--;
            if (numbers[b]+numbers[e]<target) b++;
            if (numbers[b]+numbers[e]==target)
                break;
        }
        return {b+1, e+1};
    }
};