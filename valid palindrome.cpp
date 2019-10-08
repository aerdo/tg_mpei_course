https://leetcode.com/problems/valid-palindrome/submissions/
class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size()==1 && (s[0]>='a'&&s[0]<='z' || s[0]<='Z' && 'A'<=s[0]||s[0]>='0'&&s[0]<='9')) return true;
        string ns="";
        for (int i=0; i<s.size(); i++){
        if (s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9')
                ns.push_back(s[i]);
        else
            if (s[i]<='Z' && 'A'<=s[i])
                ns.push_back(tolower(s[i]));
        }
        if (ns=="") return true;
        int i=0,n=ns.size();
        if (n==1) return true;
        while (i<n/2){
            if (ns[i]==ns[n-(i+1)]) i++;
            else return false;
        }
        return true;
        
    }
};