/*
一个链表，每个node除了next还有另一个pointer。这个pointer有可能是Null，也有可能不是。

23 -> 11 -> 20
          |
          V
         78 -> 50 -> 90
          |
          V
         21 -> 30.

题目：写一个function，按这样的顺序打印出这个链表：23 11 78 21 30 50 90 20
*/

#include <iostream>
#include <vector>

using namespace std;

struct ListNode{
	int val;
	ListNode* next;
	ListNode* another;
	ListNode(int x) : val(x), next(NULL), another(NULL){}
};

void pirintNodes(ListNode* node){
	if(!node) return;
	cout << node->val << " ";
	if(node->another) pirintNodes(node->another);
	pirintNodes(node->next);
}

int main(){
	ListNode* head = new ListNode(23);
	ListNode* n11 = new ListNode(11);
	ListNode* n20 = new ListNode(20);
	ListNode* n78 = new ListNode(78);
	ListNode* n50 = new ListNode(50);
	ListNode* n90 = new ListNode(90);
	ListNode* n21 = new ListNode(21);
	ListNode* n30 = new ListNode(30);
	head->next = n11;
	n11->next = n20;
	n11->another = n78;
	n78->next = n50;
	n50->next = n90;
	n78->another = n21;
	n21->next = n30; 
	pirintNodes(head);
	return 0;
}