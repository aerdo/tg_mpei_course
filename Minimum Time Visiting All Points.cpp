//https://leetcode.com/problems/minimum-time-visiting-all-points/
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n=points.size();
        int time=0;
        for (int i=0; i<n-1; i++){
            int x1=points[i][0];
            int x2=points[i+1][0];
            int y1=points[i][1];
            int y2=points[i+1][1];
            
            int x=abs(x1-x2);
            int y=abs(y1-y2);
            time+=min(x,y);
            time+=abs(x-y);
        }
        return time;
    }
};