/*
南美哥：有一本书，要归纳里面词出现的页码和把词sort好，
问用什么数据结构，怎么实现
例如:
A      acquire      65,  78,  100
       apple        3,  6,  8, 45
       .........
B
.
.
.
Z

给一本书，可以假定每一页是一个string array。
设计一个类，可以统计出每一个单词在书中出现的页数，即相当于一个两列的table，第一列是单词，第二列是对应的页码数组。
要求这个类实现统计的function，并且提供遍历函数，打印所有单词和单词出现的页码（要求有序遍历，即单词是alphabet的顺序）
*/


Idea
1.map<string, set<int>>
Maps are typically implemented as binary search trees, usually  red-black tree.
Insertion O(log n);
if set<int> is not OK, the value can be a red-black tree;

2.trie, prefixTree
trie
edge[26];
isEnd;
set<int>;