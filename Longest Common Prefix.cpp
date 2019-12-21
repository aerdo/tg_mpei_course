//https://leetcode.com/problems/longest-common-prefix/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()==0) return "";
        string res;
        
        int m=INT_MAX;
        for (auto str:strs)
            if (str.size()<m)
                m=str.size();
        
        for (int i=0; i<m; i++){
            char c=strs[0][i];
            bool fl=true;
            int j=1;
            while (fl && j<strs.size()){
                if (strs[j][i]!=c)
                    fl=false;
                else j++;
            }
            if (fl) res.push_back(c);
            else break;
        }
        return res;
    }
};