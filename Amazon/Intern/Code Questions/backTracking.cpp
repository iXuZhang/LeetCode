backTracking

1.Subsets

2.Given a 3 by 3 array filled with single character, and a dictionary, 
print out all the words the given characters can form
that are valid in the dictionary. 
Words can be different lengths. Dictionary有一个function: ispresent().
// LeetCode Word Search



3.题目名字我忘记了，是一个game，给一个二维数组，找到里面所有的单词。例子如下：

c a t a
d u b k
e x b l
t o a b
. Waral 鍗氬鏈夋洿澶氭枃绔�,
单词有 cat, but, to 等等等等。只要是相邻的就行。 

word searchII 也可以考虑 用trie a trie = digital tree = radix tree = prefix tree


4.
然后问了一道sudoku的题，就是给了一个已经填满的9*9的sudoku,让我判断这个sudoku是否valid。
follow up, 一个合法的sudoku的边长有什么特点？（n必须是某个整数的平方）
follow up, 把程序改成适合任意合法长度的sudoku。（也就是说不一定要填1-9，也可以是比如1-16,1-64什么的，随长度定）
follow up, 把程序改成也可以判断有cell没填的sudoku是否valid。（只要已填的部分未重复就好）