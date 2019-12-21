//https://leetcode.com/problems/happy-number/
class Solution {
public:
    bool isHappy(int n) {
        while (n>5){
            int newNum=0;
            while (n){
                newNum+=(n%10)*(n%10);
                n/=10;
            }
            n=newNum;
        }
        if (n==1) return true;
        else return false;
    }
};