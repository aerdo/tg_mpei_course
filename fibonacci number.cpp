// https://leetcode.com/problems/fibonacci-number/
class Solution {
public:
    int fib(int N) {
        int num=0;
        if (N<=1 || N>30 ) {
            return N;
        }else{
            if (N==2){
                return 1;
            }else{
                int num_prev1=1;
                int num_prev2=1;
                int num_curr=0;
                for (int i=3; i<=N; i++){
                    num_curr=num_prev1+num_prev2;
                    num_prev2=num_prev1;
                    num_prev1=num_curr;
                }
                return num_curr;
            }
        }
        
            
        }
};