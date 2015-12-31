1.
先写binary search
follow up是有duplicates的情况，返回任意index怎么做，返回最左边的index怎么做，这里又写了一个bug。。。
follow up是[9, 8, 7, 1, 2, 3, 4] binary search. 这个和Search in Rotated Sorted Array不太一样，
这里是先递减后递增，一紧张什么都写不出了。赶紧先把上一题的前半部分先复制了一遍，
然后开始模仿Search in Rotated Sorted Array，比较mid的值和两边的值，写了两行就卡住了。
三哥说你先别急着写，你先跟我讨论一下，好看看你的思路对不对。我说我想用mid跟两边的值比较。
三哥说，你这样有用吗？我：没用。。那我先写找pivot吧。
然后找到pivot后，我说然后再分别在左半边和右半边查找。他说行了，应该对了。

再follow up，有duplicates。我。。。。碰到duplicates得用linear search?
他说，这样就O(n)了。。。我：可是这里跟上一题的duplicates不一样，blablabla... 
他：对了，跟上一题不一样。。。然后他说没时间了，问了两个问题结束。


2.
Leetcode上single number的变种，不过考察的知识点和原题完全不一样.
因为给的数组里面pair是一起的，比如这样［1，1，4，3，3，7，7］。
LZ上来先用HashMap做的，时间和空间复杂度都是O(n)。
然后面试官问怎么优化，我说可以用位操作的方法，时间复杂度O(n)，空间复杂度O(1)，
然后刚要开始写代码，面试官说我思路不对，要我用divide & conquer做（此时面试已经过去28分钟了）。
LZ只知道Map和位操作的两种做法，看着时间也不太够了，于是赶紧硬着头皮开始写，但是当时已经紧张的不行了，完全找不到思路。
憋了10分钟以后，面试官看不下去了，说要不我们来一起讨论下吧，然后在他的提示下才恍然大悟：是要用Binary Search


3.
找missing number， leetcode变形题，从x到y的范围找missing的数，要求用logn的时间复杂度。
之前leetcode刷题tag里都没有提示这个做法，就没想，
面试官要求logn我才想到用binary search，根据中间点与预期中间点的大小判断在左边还是右边。