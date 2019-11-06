//https://leetcode.com/problems/complex-number-multiplication/
class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        int x1,y1,x2,y2=0;
        convert(a,x1,y1);
        convert(b,x2,y2);
        int x=x1*x2-y1*y2;
        int y=x1*y2+y1*x2;
        return to_string(x)+"+"+to_string(y)+"i";
    }
    
    void convert(string s, int& x,int& y) {
        int pos=s.find("+");
        x=stoi(s.substr(0, pos));
        y=stoi(s.substr(pos+1, s.size()-1));
    }
};