/*
用rand5函数implement rand7函数
*/

跑两次rand5，共25种等概率事件, 21种valid

Solution1

call*2
rand5 0->4
rand5 0->4
int vals[5][5] = {
    { 1, 2, 3, 4, 5 },
    { 6, 7, 1, 2, 3 },
    { 4, 5, 6, 7, 1 },
    { 2, 3, 4, 5, 6 },
    { 7, 0, 0, 0, 0 }
};
int result = 0;
while (result == 0)
{
    int i = rand5();
    int j = rand5();
    result = vals[i-1][j-1];
 }
 return result;


Solution2
	while(true){
		res = i*5 + j   // 0->24 25种可能性
		if(res <= 20) return res%7; 结果为0-6
	}