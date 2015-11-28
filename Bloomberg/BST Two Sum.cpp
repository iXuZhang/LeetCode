/*
bst里两个node的和等于一个target，2sum变形，不能用额外的数据结构。
*/


#include <iostream>

using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

void findNext(){
	
}

void findPrev(){
	
}

void TwoSum(TreeNode* num1, TreeNode* num2, int target){
	while(num1 != num2){
		if(num1->val + num2->val < target)
			num1 = findNext();
		else if(num1->val + num2->val > target)
			num2 = findPrev();
		else{
			cout << num1->val << " " << num2->val << endl;
			num1 = findNext();
		}
		else if(num1->val + num2->val == target))
	}
}

int main(){
	/*
                 15
               /    \
              10    20
             / \   /  \
            8  12 16  25    */
    TreeNode *root =  new TreeNode(15);
    root->left = new TreeNode(10);
    root->right = new TreeNode(20);
    root->left->left = new TreeNode(8);
    root->left->right = new TreeNode(12);
    root->right->left = new TreeNode(16);
    root->right->right = new TreeNode(25);
	TreeNode* leftmost = root;
	while(leftmost->left) leftmost = leftmost->left;
	TreeNode* rightmost = root;
	while(rightmost->right) rightmost = rightmost->right;
	TwoSum(leftmost, rightmost, 33);
	return 0;
}