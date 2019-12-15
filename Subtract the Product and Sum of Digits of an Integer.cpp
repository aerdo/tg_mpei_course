//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
class Solution {
public:
    int subtractProductAndSum(int n) {
        if (n/10==n) return 0;
        string num=to_string(n);
        int p=1,s=0;
        for (char c:num){
            p*=c-'0';
            s+=c-'0';
        }
        return p-s;
    }
};