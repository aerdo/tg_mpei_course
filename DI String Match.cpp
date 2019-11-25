//https://leetcode.com/problems/di-string-match/
class Solution {
public:
    vector<int> diStringMatch(string S) {
        int n=S.size();
        vector<int> res;
        int lo=0, hi=n;
        for (int i=0; i<n; i++){
            if (S[i]=='I') {
                res.push_back(lo);
                lo++;
            }else
                if (S[i]=='D'){
                    res.push_back(hi);
                    hi--;
                }
        }
        res.push_back(lo);
        return res;
    }
};