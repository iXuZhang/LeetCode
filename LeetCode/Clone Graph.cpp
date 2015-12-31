// Clone Graph
/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
class Solution {
public:
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        unordered_map<UndirectedGraphNode*, UndirectedGraphNode*> visited;
        return copyer(node, visited);
    }
    
    UndirectedGraphNode* copyer(UndirectedGraphNode* node, unordered_map<UndirectedGraphNode*, UndirectedGraphNode*>& visited){
        if(!node) return NULL;
        if(visited.count(node) > 0) return visited[node];
        UndirectedGraphNode* newNode = new UndirectedGraphNode(node->label);
        visited[node] = newNode;
        for(auto neighbor : node->neighbors)
            newNode->neighbors.push_back(copyer(neighbor, visited));
        return newNode;
    }
};