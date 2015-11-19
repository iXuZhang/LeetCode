// Course Schedule II
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<unordered_set<int>> graph(numCourses);
        for(auto p : prerequisites)
            graph[p.second].insert(p.first);
        vector<int> indegree(numCourses);
        for(auto p : graph)
            for(int node : p)
                indegree[node]++;
        queue<int> zeros;
        for(int i = 0; i < numCourses; i++)
            if(!indegree[i]) zeros.push(i);
        vector<int> res;
        for(int i = 0; i < numCourses; i++){
            if(zeros.empty()) return {};
            int j = zeros.front();
            zeros.pop();
            for(int node : graph[j])
                if(!--indegree[node]) zeros.push(node);
            res.push_back(j);
        }
        return res;
    }
};