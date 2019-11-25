//https://leetcode.com/problems/pascals-triangle-ii/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int numRows=rowIndex+1;
        vector<vector<int>> res;
        res.resize(numRows);
            for (int i = 0; i < numRows; i++) {
                res[i].resize(i+1);
                res[i][0] = 1;//крайние всегда 1
                res[i][i] = 1; 
                for(int j = 1; j < i; j++) {
                    res[i][j] = res[i-1][j-1]+res[i-1][j];
                }
            }
        return res[rowIndex];
    }
};