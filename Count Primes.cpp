//https://leetcode.com/problems/count-primes/
class Solution {
public:
    int countPrimes(int n) {
        if (n==0) return false;
        vector<bool> prime(n, true);
        prime[0]=false;
        prime[1]=false;
        for (int i=0; i<sqrt(n); i++) {
            if (prime[i]) {//если простое то все дальнейшие числа содержащие  не простые
                for (int j=i*i; j<n; j+=i) {
                    prime[j]=false;
                }    
            }    
        }
        int res=0;
        for (int i=0; i<n; i++){
            if (prime[i]) res++;
        }
        return res;
    }
};