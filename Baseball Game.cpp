//https://leetcode.com/problems/baseball-game/
class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> res;
        int lastIndex=0;
        
        for(string str:ops){
            if(isdigit(str[0]) || str[0]=='-') {res.push_back(stoi(str));}
            else if (str[0]=='+') {res.push_back(res[lastIndex]+res[lastIndex-1]);}
            else if (str[0]=='D'){res.push_back(2*res[lastIndex]);}
            else if (str[0]=='C'){res.pop_back();}
            lastIndex=res.size()-1;
        }
        return accumulate(res.begin(), res.end(),0);//сумма всех элементов
    }
};