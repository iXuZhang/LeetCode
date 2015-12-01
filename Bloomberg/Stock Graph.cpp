/*
设计题
input是continously来自于不同来源的stock name和stock price
不同来源的数据不会有overlap
output是current stock price和stock name，以及一个graph，
根据用户要求，可以反映当前一天，当前一个月，当前一年，某几个月，某几周的data。
*/


Key:
unordered_map<string, StockNode>

class StockNode{
	listNode price (one year)
	int n = 256;
	void push(int price){
		ListNode* curr = new ListNode(price, data);
		if(!head) {
			head = curr;
			tail = curr;
		}
		tail->next = curr;
		tail = tail->next;
		if(n < 256) n++;
		if(n == 256) head = head->next;
	}
	ListNode* head;
	ListNode* tail;
};
