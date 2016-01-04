sort


1.countSort
给100万个8 bit unsigned int，sort
8bit = 256 = 1 byte
use a vector[256]
count sort搞定


第一题说给你一个500 million个元素的数组，元素都是10bit的整数。
尼玛阿三一个10bit就得给我解释好几分钟，真是听不懂....让你sort这个数组，还挺简单。
每个元素才10bit，开10bit个桶，也就是2^10=1024个桶，然后用桶排序就行了，时间复杂度O(n)


follow up:
10million的item class，item有rating和name，根据rating sort。rating和上面一样也是8bit unsign
follow up就是写一个item类，然后用一个长度为256的List<List<Item>>来做，index就是rating,
同样rating的放到同一个list里面


2.quickSort
merge Sort


3.If you were given an array of 1 million integers representing age of people in a city. 
What kind of sort would you use for that array?
然后要我实现 Bucket sort
其实，count sort 就行


了quick sort和merge sort怎么工作


4.你知道哪些sort算法？

输入一个1 million大的全部是8-bit int的数组，排序