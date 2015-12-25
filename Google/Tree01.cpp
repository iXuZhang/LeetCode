/*
level order traversal
*/

    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return vector<vector<int>>();
        vector<vector<int>> res;
        queue<TreeNode*> toVisit;
        toVisit.push(root);
        while(!toVisit.empty()){
            vector<int> temp;
            int len = toVisit.size();
            for(int i = 0;i < len;i++){
                TreeNode* curr= toVisit.front();
                toVisit.pop();
                if(!curr) continue;
                temp.push_back(curr->val);
                if(curr->left) toVisit.push(curr->left);
                if(curr->right) toVisit.push(curr->right);
            }
            if(!temp.empty()) res.push_back(temp);
        }
        return res;
    }

 follow up
 bottom up
 (1)
 if(!temp.empty()) res.insert(res.begin(),temp); O(m) if insert
 (2)
 return  vector<vector<int>>(res.rbegin(),res.rend());
