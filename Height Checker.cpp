//https://leetcode.com/problems/height-checker/
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> temp=heights;
        sort(temp.begin(), temp.end());
        int res=0;
        for(int i=0; i<heights.size(); i++){
            if (temp[i]!=heights[i]) res++;
        }
        return res;
    }
};