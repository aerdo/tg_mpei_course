// https://leetcode.com/problems/sqrtx/
class Solution {
public:
    int mySqrt(int x) {
        if (x==0){
            return 0;
        }else{
            if (x==1){
                return 1;
            }else{
        double eps=0.0001;
        double a=x;
        double xn=int(a/2);
        double xn1;
        xn1=(0.5)*(xn+a/xn);
        while (abs(xn1*xn1-x)>eps){
            xn=xn1;
            xn1=(0.5)*(xn+a/xn);
        }
        return(xn1);
            }
        }
    }
};