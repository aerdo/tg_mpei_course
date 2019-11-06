//https://leetcode.com/problems/max-increase-to-keep-city-skyline/
class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
       vector<int> slr,stp;
        int n=grid.size();
        
        for (int i=0; i<n; i++){
            int max=grid[i][0];
            for (int j=1; j<n; j++) 
                if (max<grid[i][j]) max=grid[i][j];
            slr.push_back(max);
        }
        for (int j=0; j<n; j++){
            int max=grid[0][j];
            for (int i=1; i<n; i++) 
                if (max<grid[i][j]) max=grid[i][j];
            stp.push_back(max);
        }
        int res=0;
        for (int i=0; i<n; i++)
            for (int j=0; j<n; j++)
                res+=min(slr[i],stp[j])-grid[i][j];
        return res;
    }   
};