// https://leetcode.com/problems/power-of-four/
class Solution {
public:
    bool isPowerOfFour(int num) {
       double i=log10(num)/log10(4);
        if ((i-int(i))==0){
            return true;
        }else{
            return false;
        } 
    }
};