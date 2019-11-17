//https://leetcode.com/problems/sum-of-two-integers/
class Solution {
public:
    int getSum(int a, int b) {
        if (a==0) return b;
        if (b==0) return a;
        while(b){
            int sum=a^b; //сумма
	        int carry=(unsigned int)(a&b)<<1; //бит который переходит в следующий разряд ("то что в уме")
	        a=sum;
            b=carry;
        }
        return a;
    }
};