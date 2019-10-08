//https://leetcode.com/problems/number-of-segments-in-a-string/
class Solution {
public:
    int countSegments(string s) {
        int count=0;
        int i=0;
        while (i<s.size()){
            if (s[i]==' ')
                i++;
            else {
                while (i<s.size()&&s[i]!=' ')
                    i++;
                count++;   
            }     
        }
        return count;
    }
};