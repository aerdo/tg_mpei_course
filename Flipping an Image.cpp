//https://leetcode.com/problems/flipping-an-image/
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int n=A.size(), m=A[0].size();
        for (int i=0; i<n; i++){
            reverse(A[i].begin(), A[i].end());
            for (int j = 0; j < A[i].size(); j++) {
                A[i][j] = A[i][j]^1; //'^'-xor, 0^1=1, 1^1=0
            }
        }
        return A;
    }
};