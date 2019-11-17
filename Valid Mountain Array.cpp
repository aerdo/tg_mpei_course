//https://leetcode.com/problems/valid-mountain-array/
class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        int n=A.size(), i=0;
        while (i<n-1 && A[i]<A[i+1]) i++;
        if (i==0||i==n-1) return false;//верхушка должна быть не первой и не последней
        while (i<n-1 && A[i]>A[i+1]) i++;
        return i==n-1;//если дошли до конца значит верно
    }
};