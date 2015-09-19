class Solution {
public:
    /* directed graph
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<unordered_set<int>> graph(numCourses);
        for(auto n : prerequisites) graph[n.first].insert(n.second); // make it clear
        vector<bool> toVisit(numCourses, true);
        vector<bool> visited(numCourses, false);
        for(int i = 0; i < graph.size(); i++)
            if(toVisit[i] == true && DFS(graph, toVisit, visited, i)) return false; 
        return true;
    }

private:
    // DFS if it is topological order, find a topological order circle
    // if return false, visited will be all false in the end
    bool DFS(vector<unordered_set<int>>& graph, vector<bool>& toVisit, vector<bool>& visited, int node){
        toVisit[node] = false;
        visited[node] = true;
        for(auto edge = graph[node].begin(); edge != graph[node].end(); edge++)
            if(visited[*edge] || DFS(graph, toVisit, visited, *edge)) return true;
        visited[node] = false; // important!!!!!
        return false;
    }
    */
    
    // BFS visit every node, calculate indgree, if veryone has at least one indgree, return false
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<unordered_set<int>> graph(numCourses);
        for(auto n : prerequisites) graph[n.first].insert(n.second); // make a graph
        vector<int> degrees(numCourses, 0); // indegree for each node
        for(auto neighbors : graph)
            for(int n : neighbors)
                degrees[n]++;
        for(int i = 0; i < numCourses; i++){ // ten nodes
            int j = 0;
            for(; j < numCourses; j++) // find a indegree == 0
                if(!degrees[j]) break;
            if(j == numCourses) return false; // Do not find
            degrees[j] = -1; 
            for(int n : graph[j])
                degrees[n]--;
        }
        return true;
    }
};