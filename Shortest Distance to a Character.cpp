//https://leetcode.com/problems/shortest-distance-to-a-character/
class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int n=S.size();
        vector<int> res(n);
        int t=INT_MIN/2;
        for (int i=0; i<n; i++){
            if (S[i]==C) t=i;
            res[i]=i-t;
        }
        t=INT_MAX/2;
        for (int i=n-1; i>=0; i--){
            if (S[i]==C) t=i;
            res[i]=min(res[i], t-i);
        }
        return res;
    }
};