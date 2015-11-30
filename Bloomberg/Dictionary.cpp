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