/*
	kth largest element in BST
	right - mid - left
	reverse inorder traversal
*/

#include <iostream>

using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

void traversal(TreeNode* node, int& k){
	if(!node) return;
	traversal(node->right, k);
	if(--k == 0){
		cout<< node->val << endl;
		return;
	}
	traversal(node->left, k);
}

int main(){
	/*
                 15
               /    \
              10    20
             /     /  \
            5     16  25    */
    TreeNode *root =  new TreeNode(15);
    root->left = new TreeNode(10);
    root->right = new TreeNode(20);
    root->left->left = new TreeNode(5);
    root->right->left = new TreeNode(16);
    root->right->right = new TreeNode(25);
    int k = 3;
	traversal(root, k);
	return 0;
}