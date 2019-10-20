//https://leetcode.com/problems/network-delay-time/
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int, int> > > graph(n+1);
        for (auto tt : times) {
            int fr_node = tt[0];
            int to_node = tt[1];
            int cost = tt[2];
            graph[fr_node].push_back(make_pair(cost, to_node));            
        }
        vector<int> dist(n+1, INT_MAX);
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        dist[k] = 0;
        pq.push(make_pair(0, k));        
        while (!pq.empty()) {
            pair<int,int> x = pq.top();
            pq.pop();
            for (auto neighbor : graph[x.second]) {
                int ar = dist[x.second] + neighbor.first;
                if (ar < dist[neighbor.second]) {
                    dist[neighbor.second] = ar;
                    pq.push(make_pair(ar, neighbor.second));
                }
            }            
        }        
        int max_time = 0;
        for (int i = 1; i < dist.size(); ++i) {
            if (max_time < dist[i]) {
                max_time = dist[i];
            }
        }
        
        return max_time == INT_MAX? -1 : max_time;
    }
};