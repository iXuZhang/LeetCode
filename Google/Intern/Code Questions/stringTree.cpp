/*

第一道题输入一个由10组成的字符串（背景是1代表一个youtube视频中有音频的部分，0代表没有音频的部分）。设计一个Binary Tree类，使最下一层的节点值与该字符串相等。
举个例子：given "1011"
     root 
   /        \
node         node
/   \         /  \
1   0       1      1
第二道题是这道题的follow up: 为了节省空间，我们用一个节点代表其下的所有节点值与该值相同。
举个栗子：given"1011"
     root 
   /        \
node         1
/   \       
1   0    

*/

#include <iostream>
#include <queue>
using namespace std;

struct TreeNode{
	char val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(char x) : val(x), left(NULL), right(NULL) {}
};

bool isSame(string& s){
	if(s.empty()) return true;
	char a = s[0];
	for(char c : s)
		if(c != a) return false;
	return true;
}

TreeNode* buildTree(string s){
	TreeNode* node = new TreeNode('n');
	if(isSame(s)){
		node->val = s[0];
		return node;
	}
	else{
		int len = s.size()/2;
		node->left = buildTree(s.substr(0,len));
		node->right = buildTree(s.substr(len));
		return node;
	}
}

TreeNode* buildTree1(string& s, int n, int& pos){
    TreeNode* node = new TreeNode('n');
	if(n == 1){
		node->val = s[pos++];
		return node;
	} 
	else{
	    node->left = buildTree1(s, n/2, pos);
	    node->right = buildTree1(s, n/2, pos);
	    return node;
	}
}

void printTree(TreeNode*){
	queue<TreeNode*> q;
}
int main(){
	string s = "1011";
	int pos = 0;
	TreeNode* root = buildTree1(s, 4, pos);
	cout << root->val << endl;
	cout << root->left->val << " " << root->right->val << endl;
	cout << root->left->left->val << " " << root->left->right->val << " " << root->right->left->val << " "<<root->right->right->val << endl;
	root = buildTree(s);
	cout << root->val << endl;
	cout << root->left->val << " " << root->right->val << endl;
	cout << root->left->left->val << " " << root->left->right->val << endl;
	return 0;
}