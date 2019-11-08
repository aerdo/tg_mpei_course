//https://leetcode.com/problems/n-th-tribonacci-number/
class Solution {
public:
    int tribonacci(int n) {
        int a=0;
        int b=1;
        int c=1;
        
        int res=0;
        
        if(n==0) return 0;
        if (n==1) return 1;
        if(n==2) return 1;
        
        for(int i=0; i<n-2; i++){
            res=a+b+c;
            a=b;
            b=c;
            c=res;
        }
        return res;
    }
};