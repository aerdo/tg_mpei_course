//https://leetcode.com/problems/available-captures-for-rook/
class Solution {
public:
    int cap(vector<vector<char>>& b, int x, int y, int dx, int dy) {
        while (x>=0 && x<b.size() && y>=0 && y<b[x].size() && b[x][y]!='B'){
            if (b[x][y]=='p') return 1;
            x+=dx, y+=dy;
        }
        return 0;
    }
    int numRookCaptures(vector<vector<char>>& board) {
        for (int i=0; i<board.size(); i++)
            for (int j=0; j<board[i].size(); j++)
                if (board[i][j]=='R') 
                    return cap(board,i,j,0,1)+cap(board,i,j,0,-1)+cap(board,i,j,1,0)+cap(board,i,j,-1,0);
        return 0;
    }
};