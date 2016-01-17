/*
1个4位数可以从中划分成2个2位数，将2位数相加和为100且不含重复数字有多少种情况？
比如 87 + 13 =100 就是一种...
（1）、写出程序，分析需要loop多少次。
（2）、如果只有笔和纸，如何计算有多少种情况。
*/

#include <iostream>
using namespace std;
//(1).number: xy  loop times:90
int main(){
	int count = 0;
	for(int x = 10; x <= 99; x++){
		int y = 100 - x;
		int a = x/10;
		int b = x%10;
		int c = y/10;
		int d = y%10;
		if((a != b)&&(a != c)&&(a != d)&&(b != c)&&(b != d)&&(c != d))
			count++;
	}
	cout << count << endl;
	return 0;
}



/*
(2).
number: abcd
a + c = 9; a = 1,2,3,4,5,6,7,8,9; c = 8,7,6,5,4,3,2,1,0;   9
b + d = 10; b = 1,2,3,4,6,7,8,9; c = 9,8,7,6,4,3,2,1;  8

Total: 6*4 + 2*6 + 1*6 = 24 + 12 + 6 = 42
*/