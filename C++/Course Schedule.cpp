// Course Schedule
class Solution {
public:
    // BFS
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<unordered_set<int>> graph(numCourses);
        vector<int> indegree(numCourses, 0);
        for(auto p : prerequisites)
            graph[p.second].insert(p.first);
        for(auto s : graph)
            for(int node : s)
                indegree[node]++; // can not merge in graph, for the case [1,9],[1,9]
        for(int i = 0; i < numCourses; i++){
            int j = 0;
            for(; j < numCourses; j++)
                if(indegree[j] == 0) break;
            if(j == numCourses) return false;
            for(int node : graph[j])
                indegree[node]--;
            indegree[j] = -1;
        }
        return true;
    }
};