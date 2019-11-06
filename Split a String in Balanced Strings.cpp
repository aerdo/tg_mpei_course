//https://leetcode.com/problems/split-a-string-in-balanced-strings/
class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0 , l=0, r=0;
        for(int i=0; i<s.size(); i++){
            if (s[i]=='L' ) l++;
            if (s[i]=='R') r++;
            if ( l==r) {
                count++;
                l=0; r=0;
            }
        }
        return count;
    }
};