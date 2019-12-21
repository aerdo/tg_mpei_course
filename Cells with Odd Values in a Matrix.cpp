//https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/
class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<vector<int>> res(n,vector<int> (m,0));
        for (int k=0; k<indices.size(); k++){
            //строка
            for (int j=0; j<m; j++)
                res[indices[k][0]][j]++;
            //столбец
            for (int i=0; i<n; i++){
                res[i][indices[k][1]]++;
            }
        }
        int c=0;
        for (int i=0; i<n; i++)
            for (int j=0; j<m; j++)
                if (res[i][j]%2!=0) c++;
                
        return c;
        
    }
};