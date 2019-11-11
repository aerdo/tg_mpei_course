//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> s;
        string res;
        for (int i=S.size()-1; i>=0; i--){
            if (!s.empty()&&S[i]==s.top()) s.pop();
            else s.push(S[i]);
        }
        if (s.empty()) return "";
        while (!s.empty()){
            res.push_back(s.top());
            s.pop();
        }
        return res;
        
    }
};