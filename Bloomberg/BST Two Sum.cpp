/*
bst里两个node的和等于一个target，2sum变形，不能用额外的数据结构。
*/

#include <iostream>

using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode* parent;
	TreeNode(int x) : val(x), left(NULL), right(NULL), parent(NULL){}
};

TreeNode* findNext(TreeNode* node){
	if(node->right){
		node = node->right;
		while(node->left) node = node->left;
		return node;
	}
	while(node != node->parent->left) node = node->parent;
	return node->parent; 
}

TreeNode* findPrev(TreeNode* node){
	if(node->left){
		node = node->left;
		while(node->right) node = node->right;
		return node;
	}
	while(node != node->parent->right) node = node->parent;
	return node->parent; 	
}

void TwoSum(TreeNode* num1, TreeNode* num2, int target){
	while(num1 != num2){
		if(num1->val + num2->val < target)
			num1 = findNext(num1);
		else if(num1->val + num2->val > target)
			num2 = findPrev(num2);
		else{
			cout << num1->val << " " << num2->val << endl;
			num1 = findNext(num1);
		}
	}
}

int main(){
	/*
                 15
               /    \
              10    20
             / \   /  \
            5  12 16  25    */
    TreeNode *root =  new TreeNode(15);
    root->left = new TreeNode(10);
    root->left->parent = root;
    root->right = new TreeNode(20);
    root->right->parent = root;
    root->left->left = new TreeNode(5);
    root->left->left->parent = root->left;
    root->left->right = new TreeNode(12);
    root->left->right->parent = root->left;
    root->right->left = new TreeNode(16);
    root->right->left->parent = root->right;
    root->right->right = new TreeNode(25);
    root->right->right->parent = root->right;
    

	TreeNode* leftmost = root;
	while(leftmost->left) leftmost = leftmost->left;
	TreeNode* rightmost = root;
	while(rightmost->right) rightmost = rightmost->right;
	TwoSum(leftmost, rightmost, 30);
	return 0;
}