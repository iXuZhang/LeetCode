Sum

1. two sum two sum原版...稍微演了一下，这个2 sum变种是输出所有的pair各种complexity的算法都说了一遍...
一个2 sum，先问判断有没有，然后问如何返回所有的Pair，deduplicate
2sum, 找所有的pair, 所有可能的case

第二题coding 2sum，用hashmap存结点，开始没有考虑一种情况就是(1,2,3) target = 5 会输出(2,3) (3,2) 
要限制在map找结点的时候只能往后面找，不能再往前找了
follow up： 问duplicate怎么办（3，3，2，1，4） target = 5 要两个pairs都输出，
我就说按照我现在这种hashmap本来都不允许duplicate 存都存不进来，但是他要实现可以记录如果有重复，
然后问他能不能用additional 数据结构存，他说可以，然后说可以用array，这个地方真的傻了，
我说用array存每个number出现的次数，然后让写代码，不知道为什么脑袋僵了把num当成index在存，
他立马说要是我只有四个数（4，3，1000，1） 你这个不是要arraysize是1000，我说是的，这种不work，
我要换成别的存，要hashmap，他说我正想说这个下一个


2 sum.
楼主先说了一个harshtable的方法，是O(n).然后三哥表示有没有用的空间少一点，速度可以慢一点的方法。
在三哥的提醒下，楼主说出了loop+binary search的方法，然后说是o(nlogn


给一个array，找出所有 pairs that can be summed up to 10.. 就是2 sum的变种

后来就开始问不要additional data structure的解法，答用两个指针一前一后，遍历，
他都没听完就开始问running time然后就开始问3 sum，
我说3 sum还是可以用前面2 sum的方法来求，然后问running time，这个题我觉得我没有解释清楚，
觉得他是因为时间问题就说我知道你知道了，不用解释了。. 

第二题是给定一个数组，求和为某个定值的两个元素，后来follow是如果是[2 2 5 5]这种有重复的，和为7，要输出4次，
再然后还要考虑像[5 5 5 5],和为10这样的情况。总之脑子有些乱，在她的提示下还算勉强完成了

一道2sum，后面扩展成了3sum

two sum of 10， two sum of target，返回true/false
follow up: 返回下标


2Sum, return all valid pairs (HashMap solution, sort and move towards middle solution)
follow up: if there are duplicates

2. 3sum
3Sum 
刚开始没说选3个求和，所以我特么写了DFS版本 T_T 然后他开始走DFS，走了很久，他说你能写不递归方式么。我想这种暴力枚举写非递归好难，难道你只要求3Sum，所以求证了一下，果然是3Sum!

然后先写了暴力的3重循环，要求优化. from: 1point3acres.com/bbs 
写了用HashTable的，再优化
写了Sort后用Two Pointers，哦，不错，这个最好. 鐗涗汉浜戦泦

3.给一个array，一个target，返回这个array能不能pair成target的boolean值.


4. Maximum Subarray LeetCode
