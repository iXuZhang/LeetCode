
给一个数组，实现next()函数，是的数组里数出现的概率和它的值成正比
e.g. input: [1,2,3,4] if next() is called, 0.1 chance to return 1, 0.2 chance to return 2, 0.3 chance to return 3, 0.4 chance to return 5
Follow up: 如果给的是double array呢 
里面是double


第一个
先求出 sum；
随机数
v = rand() % sum //0->sum-1
v2 = rand() % 100 + 1; // 1->100

0:1   1:2   3:3  6:4

