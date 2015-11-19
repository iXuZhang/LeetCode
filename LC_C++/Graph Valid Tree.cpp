// Graph Valid Tree
class Solution {
public:
    bool validTree(int n, vector<pair<int, int>>& edges) {
        if(edges.size() != n - 1) return false;
        vector<int> table(n, -1);
        for(auto p : edges){
            int x = find(table, p.first);
            int y = find(table, p.second);
            if(x == y) return false;
            table[y] = x;
        }
        return true;
    }

private:
    int find(vector<int>& table, int x){
        if(table[x] == -1) return x;
        return find(table, table[x]);
    }

    /* bool validTree(int n, vector<pair<int, int>>& edges) {
        if(edges.size() != n - 1) return false;
        vector<unordered_set<int>> graph(n);
        for(auto p : edges){
            graph[p.first].insert(p.second);
            graph[p.second].insert(p.first);
        }
        vector<bool> visited(n, false);
        //stack<int> table; //DFS
        queue<int> table;   //BFS
        table.push(0);
        while(!table.empty()){
            //int curr = table.top(); //DFS
            int curr = table.front();
            table.pop();
            if(visited[curr] == true) continue;
            visited[curr] = true;
            for(int node : graph[curr])
                table.push(node);
        }
        for(bool node : visited)
            if(node == false) return false;
        return true;
    }
    */
};