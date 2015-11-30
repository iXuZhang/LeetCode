/*
不停地读入<id, buy/sell, amount>的组合，每次读入都去和之前的记录匹配，如果能找到一组互相amount一样的buy和sell，就把在记录里的那条的id返回。比如1 buy 10, 2 buy 20, 3 sell 10，就返回1，如果第三个是sell 20就返回2，找不到对应的就把记录存下来且返回0。
*/


Key:
My solution 
unordered_map<int,int> buy (amount, vector<int>)  amount id
unordered_map<int,int> sell (amount, vector<int>)  amount id

others
LinkedList
用个链表存到目前为止存下来的所有记录，每次来新的去链表里从头开始找第一个符合条件的对应记录，找得到就不插入新记录且移除对应记录，找不到就插入。因为大部分时间花在插入上面，所以用链表效率比较高。