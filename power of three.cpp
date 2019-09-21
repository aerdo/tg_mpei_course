// https://leetcode.com/problems/power-of-three/
class Solution {
public:
    bool isPowerOfThree(int n) {
        double i=log10(n)/log10(3);
        if ((i-int(i))==0){
            return true;
        }else{
            return false;
        }
    }
};