//https://leetcode.com/problems/car-pooling/
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<pair<int, int>> v;
        
        for(int i=0; i<trips.size(); i++){
            v.push_back({trips[i][1], trips[i][0]});
            v.push_back({trips[i][2], (-1)*trips[i][0]});
        }
        
        sort(v.begin(), v.end());
        int curCap=0;
        
        for(int i=0; i<v.size(); i++){
            curCap+=v[i].second;
            if (curCap>capacity) return false;
        }
        return true; 
    }
};