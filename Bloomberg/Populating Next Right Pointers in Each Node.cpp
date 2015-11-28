/*
Populating Next Right Pointers in Each Node II
 一个二叉树（不一定完全），现在每一个节点除了left 和 right外新加了一个 next, 要求next指向同一层右边相邻的节点 。如果右边没有相邻的则指向空。

        1 -> NULL
       /  \
      2 -> 3 -> NULL
     / \    \
    4-> 5 -> 7 -> NULL
*/

#include <iostream>

using namespace std;

struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode *next;
	TreeNode(int x) : val(x), left(NULL), right(NULL),next(NULL){}
};

void addNext(TreeNode* root){
	TreeNode* curr = root;
	TreeNode* head = NULL;
	TreeNode* prev = NULL;
	while(curr){
		while(curr){
			if(curr->left){
				if(prev) prev->next = curr->left;
				else head = curr->left;
				prev = curr->left;
			}
			if(curr->right){
				if(prev) prev->next = curr->right;
				else head = curr->right;
				prev = curr->right;
			}
			curr = curr->next;
		}
		curr = head;
		head = NULL;
		prev = NULL;
	}
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
    addNext(root);
    cout<<root->left->next->val<<endl;
    cout<<root->left->left->next->val<<endl;
    cout<<root->left->left->next->next->val<<endl;
	return 0;
}

