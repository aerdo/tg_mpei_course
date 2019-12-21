//https://leetcode.com/problems/convert-a-number-to-hexadecimal/
class Solution {
public:
    string toHex(int num) {
        vector<char> voc={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
        if (num==0) return "0";
        long int n;
        if (num<0) 
            n=pow(2,32)+num;
        else n=num;
        string res;
        while (n){
            res+=voc[n%16];
            n/=16;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};