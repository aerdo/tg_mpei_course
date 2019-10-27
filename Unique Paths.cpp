//https://leetcode.com/problems/unique-paths/
class Solution {
public:
    int uniquePaths(int m, int n) {
        //m-ширина, n-высота
        if (m==n && n==1) return 1;
        vector<int> vec(m,1);
        for (int i=0; i<n-1; i++){//на каждый проход вниз
            for (int j=m-2; j>=0; j--){//
                vec[j]+=vec[j+1];
            }
        }
        return vec[0];
    }
};