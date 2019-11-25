//https://leetcode.com/problems/count-and-say/
class Solution {
public:
    string countAndSay(int n) {
        string res;
        res+='1';
        for (int i=0; i<n-1; i++){
            string temp;
            int j=0;
            for (int j=0; j<res.size(); j++){
                int count=1;
                while (j<res.size()-1&&res[j]==res[j+1]){
                    j++;
                    count++;
                }
                temp.push_back(count+'0');
                temp.push_back(res[j]);
            }
            res=temp;
        }
        return res;
    }
};