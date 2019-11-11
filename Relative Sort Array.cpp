//https://leetcode.com/problems/relative-sort-array/
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> res;
        sort(arr1.begin(),arr1.end());
        for (int i=0; i<arr2.size(); i++){
            for (int j=0; j<arr1.size(); j++)
                if (arr1[j]==arr2[i]){
                    res.push_back(arr1[j]);
                    arr1[j]=-1;
                }
        }
        for (int i=0; i<arr1.size(); i++)
            if (arr1[i]>=0) 
                res.push_back(arr1[i]);
        return res;
    }
};