DFS

1.
题目是letter playboard，让找word。Leetcode上的题（word search,不一样的是对角线也可以），
不过这次是要在dictionary里面找，我说那我从dictionary里面拿一个word在board里面找，一直找到dict结尾。
先要跟他说思。做完之后follow-up,如果dictionary是1million 大小怎么办。。。
完全不知道。。只能说因为playboard比较小，可以根据一些不存在的character来减小dictionary搜索范围。
之后他写如果提供is_word(word)这个function可以判断单词是否在dictionary里面存在，怎么写。
我说基本思路差不多，改一下就行，他说那你改吧。。。我就一点一点改。。
中间word.push_back(character)只记得push忘了remove，然后被指出来了

2.
一个二维数组只包含True和False， 计算所有联通的True的片数。


3.
Write a function to “flood fill” a bitmap, function should allow controlling level of flood fill.
A[5][5] of integers where each cell can have only 0/1. 
If it's 0, its not flodded yet, if it's 1, its already flooded.
water at point p at time t1,
p, p's neighbors at time t2 (t1+x)
p, p's neighbors, p's neighbors' neighbors -> at time t3 (t2+x)
current cell (i, j) => i-1, j or i, j+1, or i, j-1, or i+1, j  or i+1, j+1 or i-1, j-1
input: 2d array(filled), starting cell (i, j), level of flooding (1,2,3....) 
