/*
给一个二叉树，让我返回给定node的深度， 没有返回-1
*/

#include <iostream>
#include <queue>

using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

void getDepth(TreeNode* root, int& res, int depth, int target){
	if(!root) return;
	if(target == root->val) res = depth+1;
	getDepth(root->left, res, depth+1, target);
	getDepth(root->right, res, depth+1, target);
}

int getDepth(TreeNode* root, int target){
	if(!root) return -1;
	queue<TreeNode*> nodes;
	nodes.push(root);
	int depth = 0;
	while(!nodes.empty()){
		int len = nodes.size();
		for(int i = 0; i < len; i++){
			TreeNode* curr = nodes.front();
			nodes.pop();
			if(!curr) continue;
			if(curr->val == target) return depth;
			nodes.push(curr->left);
			nodes.push(curr->right);
		}
		depth++;
	}
	return -1;
}

int main(){
	/*
	         15
	       /    \
	      10    20
	     / \   /  
	    5  12 16     */
    TreeNode *root =  new TreeNode(15);
    root->left = new TreeNode(10);
    root->right = new TreeNode(20);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(12);
    root->right->left = new TreeNode(16);
    int res = -1;
	getDepth(root, res, -1, 12);
	//cout << res << endl;
	cout << getDepth(root, 16) << endl;
	return 0;
}