//https://leetcode.com/problems/rotting-oranges/
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int count=0, res=-1;
        queue<vector<int>> q;
        vector<vector<int>> d={{-1,0},{1,0},{0,-1},{0,1}};
        
        for (int i=0; i<grid.size(); i++)
            for (int j=0; j<grid[0].size(); j++){
                if (grid[i][j]>0) count++;
                if (grid[i][j]==2) q.push({i,j});
            }
        
        while (!q.empty()){
            res++;
            int size=q.size();
            for (int i=0; i<size; i++){
                vector<int> cur=q.front();
                count--;
                q.pop();
                for (int j=0; j<4; j++){
                    int x=cur[0]+d[j][0], y=cur[1]+d[j][1];
                    
                    if (x<grid.size() && x>=0 && y<grid[0].size() && y>=0 && grid[x][y]==1){
                        grid[x][y]=2;
                        q.push({x,y});
                    }
                }
                
            }
        }
        if (count==0) return max(0,res);
        return -1;
    }
};