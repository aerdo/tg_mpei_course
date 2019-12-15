//https://leetcode.com/problems/shift-2d-grid/
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        for (int q=0; q<k; q++) {
            int n=grid.size(), m=grid[0].size();
            int prev=grid[0][0]; 
            grid[0][0]=grid[n-1][m-1];
            for (int i=0; i<n; i++) {
                for (int j=0; j<m; j++) {
                    if (i==0 && j==0)
                        continue;
                    int temp=grid[i][j];
                    grid[i][j]=prev;
                    prev=temp;
                }
            }
        }
        return grid;
    }
};