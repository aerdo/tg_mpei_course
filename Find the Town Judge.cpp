//https://leetcode.com/problems/find-the-town-judge/
class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> trusts_him(N+1, 0), he_trusts(N+1, 0);
        for (int i=0; i<trust.size(); i++){
            he_trusts[trust[i][0]]++;
            trusts_him[trust[i][1]]++;
        }
        for (int i=1; i<=N; i++){
            if (trusts_him[i]==N-1 && he_trusts[i]==0)
                return i;
        }
        return -1;
    }
};