//https://leetcode.com/problems/monotonic-array/
class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        if (A.size()==1) return true;
        return incr(A)||decr(A);
    }
    bool incr(vector<int>& A){
        for (int i=0; i<A.size()-1; i++)
            if (A[i]>A[i+1]) return false;
        return true;
    }
    bool decr(vector<int>& A){
        for (int i=0; i<A.size()-1; i++)
            if (A[i]<A[i+1]) return false;
        return true;
    }
};