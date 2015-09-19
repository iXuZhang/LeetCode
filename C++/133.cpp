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
    // when #2,2 when there is old2 in node->neighbors should return new node2
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        if(!node) return NULL;
        if(table.count(node) == 0){
            table[node] = new UndirectedGraphNode(node->label);
            for(auto n : node->neighbors)
                table[node]->neighbors.push_back(cloneGraph(n));
        }
        return table[node];
    }
    
private:    
    unordered_map<UndirectedGraphNode*,UndirectedGraphNode*> table;
};