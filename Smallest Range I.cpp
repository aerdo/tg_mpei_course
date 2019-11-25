//https://leetcode.com/problems/smallest-range-i/
class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int minimum=A[0], maximum=A[0];
        for (int x:A){
            minimum=min(minimum,x);//найдем минимум
            maximum=max(maximum,x);//найдем максимум
        }
        return max(0,maximum-minimum-2*K);
    }
};