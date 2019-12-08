//https://leetcode.com/problems/employee-importance/
/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        set<int> visited;
        map<int, Employee*> workers;
        visited.insert(id);
        for (auto employee:employees){
            workers[employee->id]=employee;
        }
        int res=0;
        queue<int> q;
        q.push(id);
        while (!q.empty()){
            auto t=q.front();
            q.pop();
            if (workers.find(t)!=workers.end()){
                res+=workers[t]->importance;
                visited.insert(t);
                vector<int> subord=workers[t]->subordinates; 
                for (auto s:subord)
                    if (!visited.count(s)) q.push(s);
            }
        }
        return res;
    }
};