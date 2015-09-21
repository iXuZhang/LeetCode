class Solution {
public:
    /* DFS Topological Sort
    vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<int> res;
        vector<bool> visited(numCourses, false);
        vector<bool> toVisit(numCourses, true);
        vector<unordered_set<int>> graph(numCourses);
        for(auto course : prerequisites) graph[course.second].insert(course.first);
        for(int n = 0; n < numCourses; n++)
            if(toVisit[n] && DFS(graph, res, toVisit, visited, n)) return vector<int>();
        reverse(res.begin(),res.end());
        return res;
    }
    
private:
    bool DFS(vector<unordered_set<int>> &graph, vector<int> &res,vector<bool> &toVisit, vector<bool> &visited, int node){
        toVisit[node] = false;
        visited[node] = true;
        for(int n: graph[node])
            if(visited[n] || toVisit[n] && DFS(graph, res, toVisit, visited, n)) return true;
        res.push_back(node);
        visited[node] = false;
        return false;
    }
    */
    
    // BFS Topological Sort
    vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<int> res;
        vector<unordered_set<int>> graph(numCourses);
        for(auto course : prerequisites) graph[course.second].insert(course.first);
        vector<int> indegree(numCourses);
        for(auto i : graph)
            for(int j : i) indegree[j]++;
        for(int i = 0; i < numCourses; i++){
            int j = 0;
            while(indegree[j] != 0 && j < numCourses) j++;
            if(j == numCourses) return vector<int>();
            res.push_back(j);
            indegree[j] = -1; // the first one
            for(int i: graph[j]) indegree[i]--;
        }
        return res;
    }
};