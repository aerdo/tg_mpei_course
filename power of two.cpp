// https://leetcode.com/problems/power-of-two/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        double i=log10(n)/log10(2);
        if ((i-int(i))==0){
            return true;
        }else{
            return false;
        }
    }
};