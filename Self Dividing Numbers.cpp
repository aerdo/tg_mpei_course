//https://leetcode.com/problems/self-dividing-numbers/
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for (int n=left; n<=right; n++){
            if (check(n)) res.push_back(n);
        }
        return res;
    }
    bool check(int n){
        int x=n;
        while (x>0) {
            int d=x%10;
            x/=10;
            if (d==0 || (n % d)>0) return false;
        }
        return true;
    }
};