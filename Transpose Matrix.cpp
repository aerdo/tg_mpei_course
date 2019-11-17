//https://leetcode.com/problems/transpose-matrix/
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int r=A.size(), c=A[0].size();
        vector<vector<int>> res(c, vector<int>(r, 0));
        for (int i=0; i<r; i++)
            for (int j=0; j<c; j++)
                res[j][i]=A[i][j];
        return res;
    }
};