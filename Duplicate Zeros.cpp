//https://leetcode.com/problems/duplicate-zeros/
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size(), resSize=0, i=0;
        vector<int> res;
        while (i<n&resSize<n){
            if (arr[i]!=0){
                res.push_back(arr[i]);
                resSize++;
            }else{
                res.push_back(0);
                res.push_back(0);
                resSize+=2;
            }
            i++;
        }
        if (resSize==n+1) res.pop_back();
        arr=res;
    }
};