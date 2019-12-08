//https://leetcode.com/problems/course-schedule-ii/
class Solution {
public:
    vector<vector<int>> cycleList;
    vector<int> res;
    set<int> visited;
    set<int> cycle;
    bool isCycle=false;
    
    vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites){
        cycleList.assign(numCourses, vector<int>());
        for (int i=0; i<prerequisites.size(); i++)
            cycleList[prerequisites[i][1]].push_back(prerequisites[i][0]);
        for (int i=0; i<numCourses; i++){
            if (visited.count(i)<1) dfs(i);
            if (isCycle) return vector<int>();
        }
        return res;
    }
    void dfs(int i){
        cycle.insert(i);
        visited.insert(i);
        for (int j=0; j<cycleList[i].size(); j++){
            if (cycle.count(cycleList[i][j])>0)
                isCycle=true;
            if (visited.count(cycleList[i][j])<1)
                dfs(cycleList[i][j]);
        }
        res.insert(res.begin(), i);
        cycle.erase(i);
    }
};