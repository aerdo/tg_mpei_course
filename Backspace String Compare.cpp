//https://leetcode.com/problems/backspace-string-compare/
class Solution {
public:
    bool backspaceCompare(string S, string T) {
        backspace(S);
        backspace(T);
        return (S==T);
    }
    void backspace(string& s){
        stack<char> res;
        for (int i=0; i<s.size(); i++){
            if (s[i]!='#') res.push(s[i]);
            else if (!res.empty()) res.pop();
        }
        string newS;
        while (!res.empty()){
            newS.push_back(res.top());
            res.pop();
        }
        s=newS;
    }
};