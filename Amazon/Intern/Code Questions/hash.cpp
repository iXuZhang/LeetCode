map


1.Write a function that takes in email lists and 
results in a new email list that contains only the email addresses that are in all lists
List1(kindle)    : foo@amazon.com
List2(aws)       : foo@amazon.com, jason@amazon.com
List3(videogames): foO@amazon.com, jason@amazon.com, annabel@amazon.com
Output           : {}
解法是用两个set 交换着存

2.Given a ransom note and a newspaper, write a Boolean function 
to determine if the ransom note could be built from the words in the newspaper. 
Assume that both the note and the newspaper are provided as 
an array of strings (where each string is a word), 
that a newspaper word must be an exact match to be used in the note, 
and that each newspaper word can only be used once.


3.Given two integer arrays, how will you find the common elements between the two?
写了一个暴力枚举，然后follow up => 提高效率， HashMap。


4.给你一个novel，输出单词出现的次数； 曰： hashmap，unordered_map； 
follow up 为什么用unordered_map不用map？ 曰：不需要排序； 
follow up:时间复杂度多少？hash的O(1)， 题目O(n)；
follow up: 那hash的最坏情况下是多少？ 曰：说最坏的话要看collision的strategy了，open address: O(hash 的size()); linked list: 最长的list的长度；
那刚刚那个题不用hash，用树结构怎么做？曰：前缀树！然后解释了下...感觉没有解释清楚


5.anagram
加了一个大背景 我有一本字典 怎么找到所有anagram然后输出
会问你function interface是什么 最后追问时间复杂度


6. Anagram
0. 判断一个string是不是另外一个string的permutation
1. LeetCode Group Anagrams
2. LeetCode valid Anagrams


7. 找出一个int array里重复出现最多的。
unordered_map vs map
time & space
如果不用map，用什么方法？ sort

8.
给一个string，判断是否所有character无重复
我先答用hashset，重复的返回false
follow up1:不许用任何data structure。。。 那我就brute force， 双指针2个loop，时间复杂度n^2. Waral 鍗氬鏈夋洿澶氭枃绔�,
follow up2: 能不能改善一下，太慢了。。。 我说可以转成charArray, Arrays.sort，之后check charArray是否是完全ascending
follow up3: 他说不错，glad 我想到了sort charArray,但是我感觉他本来是期待我说个别的方法，他又让我弄个O(n)的方法
然后他给了个提示，如果string里面都是ascii呢，于是乎就建立了一个array[256]，设定flag，check有没有重复


9.
This class will be given a list of words (such as tokenized words from a paragraph of text).
* It will also provide a method that takes two words and returns the shortest distance(in words)
* between these two words in the provided text.
* Example:. more info on 1point3acres.com
* WordDistanceFinder finder = new WordDistanceFinder(Arrays.asList(“the”, “quick”, “brown”, “fox”, “quick”));
* assert(finder.distance(“fox”, “the”) == 3);
* assert(finder.distance(“quick”, “fox”) == 1);

要注意的是，输入List中的words会有重复。

第二题写的过程中，思路卡在一个地方，想用HashMap，但不知道怎么存储同一个word的多个index，然后央求小哥给个hint。
小哥就慷慨地讲了一点，说用HashMap<String,List<Integer>>, 然后继续码。。
最后又卡在两个sorted List找出元素最小distance，真是给自己跪了，看时间也不多了，
想用两个for loop，但小哥说O(n^2)太复杂，不允许。。然后时间就到了。
正确方法： two pointer 问题
public static int Distance(String[] words, String word1, String word2) {

        if(words == null || words.length <= 0) return -1;
        int index1 = -1;
        int index2 = -1;
        int res = -1;
        for(int i = 0; i < words.length; ++i) {. from: 1point3acres.com/bbs 
. visit 1point3acres.com for more.
            if(words == word1) index1 = i;
            if(words == word2) index2 = i;
            if((words == word1 || words == word2) && index1 != -1 && index2 != -1) { 鏉ユ簮涓€浜�.涓夊垎鍦拌鍧�. 
                res = Math.max(Math.abs(index1 - index2), res);
            }
        }

        return res;
    }

补充内容 (2015-3-22 01:28):
res = Math.min(Math.abs(index1 - index2), res);

