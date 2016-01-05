

简化出来对一组数据找最大最小值，平均值和80%的点，比如[2,3,1,4,5] 中80%的点就是4，
前三个比较简单，最后80%那个lz先说了可以直接sort找，
后来follow up是如何improve，想到了BST，这样找就是log(n)了，然后就变成找bst中第k小（lc原题）了。
面完小哥感觉比较满意，一周后收到offer


现在有两个文件，第一个文件里面是物品的price，第二个文件里面是物品的tax，但他们不对应。比如说，第一个文件是 40 30 20 10， 第二个文件是 3 2 1 4，
（假设是百分之10的tax rate，不对应的意思就是说，第二个文件并不一定是 4 3 2 1）， 
写一个函数，将文件读进来，然后找出这个州的tax rate。也不难，就找出两个数组中的最小值，然后相除。

一道题 cows and bulls  2个string 相同地方相同字母是 cow  
相同字母不相同的地方时bulls return cow和bull各几个 hashtable 这次再不会栽给你了


有个数组长度是n，里面的元素是from 1 to n + 1， 貌似是一个元素少了，找出missing元素

一个matrix 要求找出 横 竖 对角线 的sum  找出最大的一个

-50到50所有的数，如果能被3整出，输出a，被7整除，输出b，都能整除，输出ab，都不行，输出原数字，中间要有空格，就像这样 -50 b a -47....... 
后来问了楼主怎么测试对不对，应该用输出的结果equals(正确结果)来测试

题目是给一个数组，找出连续的不出现重复数字的连续复子数组的最大长度，和字母那差不多。
就像[5 6 4 5 1 2 3 7 8],最大长度就是6，这样的。然后follow up说不能用额外的空间，
lz在他的提示之下， 求了数组相邻元素的差，然后寻找连续和为0的那么一片，
编完了他来了个thats good. 但后来一想这方法完全就是个bug，不能确保中间没重复的，不知道这三哥哥怎么回事。


single number。秒说xor，但是哥们说不能用。改用hash类数据结构。
因为一开始没有想到最有，又让我优化空间。最后然我口述伪码。然后讨论了一些边界情，例如数组极大。

有一个int数组，每个int的范围都是1到10000，找出最小的不存在的数。比如array={3,1,4} return 2


triangle，求max sum Leetcode原题Triangle. 不过这里是返回最大数. 

说是fizzbuzz game，之前没做过，突然感觉不对，
然后听他解释规则说，给定n，输出1..n，如果是3的倍数打印fizz,5的倍数打印buzz，15的倍数打印fizzbuzz，
否则输出原来的数字。。

找出m和n之间的所有prime number，如何设计test case。


小哥给了一个NODE(不是树的，是图)的API，input一个node的SET 返回一个BOOLEAN， 所有的SET里的NODE，是否是连接的图。

给一个int数字输出English word，eg. 4500，输出four thousand five hundred，最多六位数。

用2个heap求median，

compare version number

Min in rotated sorted array

一个是三角形的数据结构，找从顶向下的最长路径，我说用DP写，面试官还不愿意，让用普通的方法解，所以我就直接用dfs解了
。。最后又写了一道next permutation。


Shuffle card

GetNBytes, can call multi times, leetcode 原题

Array Length encoding: 给定binary数组(比如[1010]), 计算每个digit数量, 返回这种形式([11011101]).
类似leetCode中的count and say

问了我如何用两个stack 来实现 queue。
问了我各类tree traversal的方式和他们的顺序。. more info on 1point3acres.com
大题就问了一题 就是leetcode上的two sum。
面试官加的额外要求是return全部符合的pair(ascending order) 并且 array里会有duplicated element， 只要index不一样 都算unique。. 1point 3acres 璁哄潧
整个面试就做了这么一大题。。 鏉

Leetcode Maximum Subarray.

atoi Leetcode
然后让我implement atoi, 一开始没有做任何corner case checking. from: 1point3acres.com/bbs 
后来被提示之后分别做了 负数的checking 和 input里出现字母的checking。

Pascals Triangle II

两个文件，里面各有几行字符串，找到相同的行，输入是文件，输出是字符串联表。（楼主慌忙查找java文件流。。。）

输入是二维矩阵，输出二维矩阵，矩阵每个点是左上角所有数之和， 要求一次遍历

给你一个 Integer 的 Stream，在 Stream 结束的时候随机等概率返回其中的一个元素。


把array分成左右两部分，左边的和等于右边的和,找到这样的一个index

LeetCode Fraction to Recurring Decimal

（Microsoft Excel）A, B, ..., Z, AA, AB, ...返回integer列数

Maximum Subarray

trapping water那题的变种
楼主能具体说一下怎么个变种法么？ 是要求返回最高的液面么？多谢多谢！

问了一道题 triangle LeetCode
follow up：输出路径

leetcode原题 atoi, 面试官都不让我考虑溢出的问题。follow up的时候是说base的字符串，转换成十进制的结果。
但是脑子短路了，老长时间都没想出来，太水了，都没想到建hashmap给ABCDEF存值。

Find First Unique Object in a list of objects. Objects can be any type. . 
Folow up: solve in one pass
Doublelinkedlist + hash

Without using the “/” operator,  LEEtCode 29. Divide Two Integers
create a function/method in a strongly-typed language of your choice that takes two integers and
returns their quotient, exactly mimicking the behavior of the / operator. 
Don't worry about creating a main function, class or imports. Assume you have access to any library functions you might need 
-- unless there's a library function that performs this already. 

