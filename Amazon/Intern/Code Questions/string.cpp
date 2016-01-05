string 

1.Add Binary
2.reverse words in string
3.reverse a string
4.  已知一个ls(dir)函数， 功能等于unix下的ls命令，返回一个string包含dir目录下的所有条目。 
让你代码写一个lsR(dir),就是ls()的递归版本，递归的对dir下的所有文件夹和文件做ls操作并显示结果。
5.Implement strStr() Write a function that takes in 2 strings, and finds the first instance of the second string in the first[/hide]
LeetCode
6.string to interger  一开始忘记考虑空格了，他给了个test case 问我咋办 我说我我能改一下吗 他说改吧
7.reverse words in a sentence
8.longest substring without repeating characters
determine a string is palindrome
9. get the longest palindrome substring
10. string2int
11.string转换成binary

第一个问题是给字符串A和B 找出所有在A中出现了 但在B中没有出现的字符 很简单 开了个256的bool数组很快写好 
写完他会要求给他讲解一下过程 然后让你自己搞几个test case测试一下 然后follow up是找出A中出现的比B中次数多的字符 
把前面的bool数组改成int数组 判断条件改一下以后迅速搞定(记得有点小bug 后来很快找出来改掉了)

句子反序，比如"It is a  good day", the output should be "day good a is It". 
跟上个面试官不一样， 先让我讲思路。我一开始还没缓过神来，讲了个最直接的方法，先parse句子，
反正可以用C++的stringstream，然后提取出一组单词，然后将数组反序再拼成所要求的句子。
然后他说如果句子中的空格可以任意多且都要保留怎么办，有没有更好的办法？然后我就想到先把整个string都反序，
然后，从头开始遍历，找出各个单词的位置，将其逐个反序。他听后说可以，跟前面提出的相比好在哪里，
我说不用额外的空间，可以in-place。
然后他问我有没有更好的办法，我说或许有吧，但还要再想想。然后，他说其实他觉得已经够好了。


(1) Reverse string 基本上用二个pointer就可以解决 
      Ex: Hello word! 
      --> !dord olleH
(2) Reverse word 上一题的follow up
      Ex: Hello word!
      --> word! Hello

String变char数组类型后的反转输出，不让开辟额外新空间

问的是两个string1，和string2，怎么判断string1是不是string2的subsequence。

我一个BST和一个string，怎么找到common的element。