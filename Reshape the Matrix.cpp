//https://leetcode.com/problems/reshape-the-matrix/
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if (r*c!=nums.size()*nums[0].size()) return nums;
        vector<int> vals(nums.size()*nums[0].size());
        int k=0;
        for (int i=0; i<nums.size(); i++)
            for (int j=0; j<nums[0].size(); j++){
                vals[k]=nums[i][j];
                k++;
            }
        k=0;
        vector<vector<int>> res(r, vector<int>(c));
        for (int i=0; i<r; i++)
            for (int j=0; j<c; j++){
                res[i][j]=vals[k];
                k++;
            }
        return res;
    }
};