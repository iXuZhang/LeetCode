class vote {
     String candiate;
     int timstamp;
};
比如
timestamp    candidate
1      			X
2       		Y
3       		Y
4       		Z
5       		Z
6       		Z

1.然后再给出一个时间搓，问这个时间搓之前哪个选举人得票最高。。（这个function只call一次）
我就遍历数组时间搓 <= given timstamp, 用hashmap 存每个candidate出现count，取最高的返回就好

2.follow up， 如果要得到最高的k个呢。。
感觉面的跟一面那个一样（用个min_heap维护就好)

3.follow up, 输入是 Vote [] votes, String []candidates.. 
比如 votes 如上述，candidaes = ['Y','X']，要问存不存在一个timestamp 使得当前timestamp下candidate排名根给的candidates数组吻合
比如candidates = ['Y','X'] 返回就是timestamp 3 (timestamp 2有歧义，Y和X 一样 面试官说不行)

stuck Candidate{
    char name;
	int pos;
	int rank;
	int count;
	Candidate* prev;
	Candidate* next;
	Candidate(char x,int y) : name(x),rank(y){}
}

unorder_map<char, Candidate*> table
DoubleLinedList
int count;

每当输入一个新的vote的时候
table[char]->count++
如果比下一个count大，则互换位置，一个pos++，另一个pos--
如果 pos == rank, count++
if count == size of candidates， return timestamp
