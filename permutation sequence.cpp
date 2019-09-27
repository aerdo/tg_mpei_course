//https://leetcode.com/problems/permutation-sequence/
class Solution {
public:
    string getPermutation(int n, int k) {
        string a;
        vector<int> fact(n,1);
        vector<char> ind(n);
        for (int i=1; i<n; i++){
            fact[i]=fact[i-1]*i;
        }
        for (int i=0; i<n; i++){
            ind[i]='0'+(i+1);
        }
        k--;
        for (int i=1; i<=n; i++){
            int index=k/fact[n-i];
            a=a+ind[index];
            ind.erase(ind.begin()+index);
            k-=fact[n-i]*index;
        }
        return a; 
    }
};