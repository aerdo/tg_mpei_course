//https://leetcode.com/problems/number-of-islands/
class Solution {
public:
    void count(vector<vector<char>>& grid, int i, int j){//разбегаемся
        if (i>=0 && i<grid.size() && j>=0 && j<grid[0].size() && grid[i][j]=='1'){//условия чтобы не выйти за границы
            grid[i][j]='0';//удаляем весь остров который посчитали
            count(grid, i-1, j);//если при проверке соседних элементов находим нули, значит граница острова, выходим из рекурсии
            count(grid, i, j-1);
            count(grid, i+1, j);
            count(grid, i, j+1); 
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        if (n==0) return 0;
        int m=grid[0].size();
        
        int c=0;
        for (int i=0; i<n; i++)
            for (int j=0; j<m; j++)
                if (grid[i][j]=='1'){//если находим край острова(границу вода-суша)
                    count(grid,i,j);//разбегаемся как тараканы на кухне в общежитии
                    c++;
                }
        return c;
    }
};