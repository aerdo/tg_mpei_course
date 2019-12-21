//https://leetcode.com/problems/base-7/
class Solution {
public:
    string convertToBase7(int num) {
        if (num==0 || abs(num)<7) return to_string(num);
        int sign;
        if (num<0) sign=-1;
        else sign=1;
        num=abs(num);
        string res="";
        while (num>=1){
            res+=to_string(num%7);
            num=num/7;
        }
        reverse(res.begin(), res.end());
        if (sign==-1) res="-"+res;
        return res;
    }
};