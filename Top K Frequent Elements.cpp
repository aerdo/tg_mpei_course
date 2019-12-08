//https://leetcode.com/problems/top-k-frequent-elements/
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        int n=nums.size();
        map<int, int> m;
        vector<vector<int>> bucket(n+1);
        for (auto n:nums)
            m[n]++;
        for (auto p:m){
            int f=p.second;
            bucket[f].push_back(p.first);
        }
        for (int i=n; i>=0; i--)
            for (auto b:bucket[i]){
                res.push_back(b);
                if (res.size()==k)
                    return res;
            }
        return res;
    }
};