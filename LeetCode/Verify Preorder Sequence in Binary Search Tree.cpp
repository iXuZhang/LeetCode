// Verify Preorder Sequence in Binary Search Tree
class Solution {
public:
    /*  O(n) space
    bool verifyPreorder(vector<int>& preorder) {
        if(preorder.empty()) return true;
        stack<int> nodes;
        int minVal = INT_MIN;
        for(int node : preorder){
            if(node < minVal) return false;
            while(!nodes.empty() && nodes.top() < node){
                minVal = nodes.top();
                nodes.pop();
            }
            nodes.push(node);
        }
        return true;
    }
    */
    
    //  O(n) space use a vector as a stack
    bool verifyPreorder(vector<int>& preorder) {
        if(preorder.empty()) return true;
        int i = -1;
        int minVal = INT_MIN;
        for(int node : preorder){
            if(node < minVal) return false;
            while(i >= 0 && preorder[i] < node)
                minVal = preorder[i--];
            preorder[++i] = node;
        }
        return true;
    }    
    
};