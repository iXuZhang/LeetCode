sort


1.countSort
给100万个8 bit unsigned int，sort
8bit = 256 = 1 byte
use a vector[256]
count sort搞定

follow up:
10million的item class，item有rating和name，根据rating sort。rating和上面一样也是8bit unsign
follow up就是写一个item类，然后用一个长度为256的List<List<Item>>来做，index就是rating,
同样rating的放到同一个list里面


2.quickSort


3.If you were given an array of 1 million integers representing age of people in a city. 
What kind of sort would you use for that array?
然后要我实现 Bucket sort
其实，count sort 就行


了quick sort和merge sort怎么工作