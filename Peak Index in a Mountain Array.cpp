//https://leetcode.com/problems/peak-index-in-a-mountain-array/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int i=0;
        while (A[i]<A[i+1]) i++;//пока возрастает,  идем дальше, как только начинает убывать, прекращаем поиск
        return i;
    }
};