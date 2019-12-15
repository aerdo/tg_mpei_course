//https://leetcode.com/problems/as-far-from-land-as-possible/
class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        int n=grid.size();
        //очередь из координат суши
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if (grid[i][j]==1){
                    q.push({i, j});
                }
            }
        }
		//если нет суши или воды
        if (q.size()==0 || q.size()==n*n) return -1;
        
        int r, c, v, nr, nc; //row, col, val, newRow, newCol
        int res=0;
        
        //для изменения направления обхода
        int dir[4][2]={{0, -1}, {-1, 0}, {1, 0}, {0, 1}};
        
        while (!q.empty()){
            r=q.front().first;
            c=q.front().second;
            v=grid[r][c];
            q.pop();
            //обработка соседей
            for(int i=0; i<4; i++){
                nr=r+dir[i][0]; 
                nc=c+dir[i][1];
                if(nr<0 || nr>=n || nc<0 || nc>=n){
                    continue;
                }//если вышли за пределы данной сетки
                if(grid[nr][nc]!=0) continue;//нужна только вода
                q.push({nr, nc});//добавим в очередь на обработку
                grid[nr][nc]=v+1;
                res=max(res, grid[nr][nc]);
            }
        }
        return res-1;
    }
};