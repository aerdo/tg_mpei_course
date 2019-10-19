//https://leetcode.com/problems/implement-strstr/
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle=="") return 0;
        int n=haystack.size(), ni=needle.size(), i=0;
        while (i<n-ni+1){
            int j=0;
            bool fl=true;
            while (j<ni&&fl){
                if (haystack[i+j]==needle[j]) j++;
                else fl=false;
                }
            if (fl) return i;
            else i++;
            }
        
        return -1;
    }
};