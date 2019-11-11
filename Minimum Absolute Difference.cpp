//https://leetcode.com/problems/minimum-absolute-difference/
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int m=INT_MAX;
        for (int i=1; i<arr.size(); i++){//нашли минимум
            int dif=arr[i]-arr[i-1];
            m=min(m,dif);
        }
        vector<vector<int>> res;
        for (int i=1; i<arr.size(); i++){
            int dif=arr[i]-arr[i-1];
            if (dif==m)
                res.push_back({arr[i-1],arr[i]});
        }
        return res;
    }
};