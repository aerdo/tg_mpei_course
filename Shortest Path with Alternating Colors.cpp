//https://leetcode.com/problems/shortest-path-with-alternating-colors/
class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& red_edges, vector<vector<int>>& blue_edges){
        vector<vector<pair<int,int>>> graph(n);
        for (auto el:red_edges) graph[el[0]].push_back({el[1],0});
        for (auto el:blue_edges) graph[el[0]].push_back({el[1],1});
        
        vector<vector<bool>> visited(n, vector(2,false));
        queue<pair<int,int>> q;
        vector<int> res(n,-1);
        
        q.push({0,-1});
        int curLength=0;
        while (!q.empty()){
            int s=q.size();
            for (int i=0; i<s; i++){
                auto cur=q.front();
                q.pop();
                if (res[cur.first]==-1)
                    res[cur.first]=curLength;
                for (auto n:graph[cur.first])
                    if (n.second!=cur.second &&!visited[n.first][n.second]){
                        visited[n.first][n.second]=true;
                        q.push(n);
                    }
            }
            curLength++;
        }
        return res;
    }
};