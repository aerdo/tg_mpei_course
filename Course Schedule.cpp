//https://leetcode.com/problems/course-schedule/
class Solution {//предварительное условие
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> d(numCourses);
        vector<vector<int>> graph(numCourses);
        
        for (int i=0; i<prerequisites.size(); i++){//что от чего зависит
            graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
            d[prerequisites[i][0]]++;
        }
        for (int i=0; i<numCourses; i++){
            int j=0;
            bool fl=true;
            while (j<numCourses&&fl){//есть ли зависимые курсы
                if (d[j]!=0) j++;
                else fl=false;
            }
            if (j==numCourses) return false;//все курсы зависящие
            //если не нашли такой
            d[j]=-1;//вычеркнем его
            for (auto r:graph[j])
                d[r]--;//вычеркнем отовсюду
        }
        return true;
    }
};