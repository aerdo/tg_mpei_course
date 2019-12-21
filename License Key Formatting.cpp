//https://leetcode.com/problems/license-key-formatting/
class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        string temp;
        for (int i=0; i<S.length(); i++) {
            if (S[i]=='-') 
                continue;
             temp+=toupper(S[i]);
        }
        string res; 
        int track=0;
        for (int i=temp.length()-1; i>=0; i--) {
            track++;
            res+=temp[i];
            if (track==K && i!= 0) {
                res+="-";
                track=0;
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};