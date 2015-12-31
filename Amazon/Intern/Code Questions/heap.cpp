
1.
有一个很多条纪录（人，电影，data），问哪个人看电影最多。
然后我就说用hash做，存下人和对应的电影数量，然后排序一下选前100。他让我写出来。
顺便说一下复杂度。写完之后说把电影改成distinct，那我就把hash改成人对应的电影set。
然后顺便问了hash是怎么实现的。
最后让我优化一下。我就用了quick sort的idea来优化。


2.
给个string，找出出现最多的词。写了个hashmap存出现次数的。
一开始忘了处理句号的问题了，然后不记得去掉句号的那个string method叫啥了，经提醒想起来时strip。
然后ok了。接着问，如果要问前xx个出现最多次数的呢。存treemap/set 写comparable。
也许有更好的办法。没刷过题。。靠想的。。然后时间就差不多了。


3.
chris说他是market组的，大致意思就是给客户提供deal，然后问我哪些因素可以挑选不同的deal。 
我就扯了些性别啊，工作啊，距离大小啊啥的，前期还好，不停的cool，cool。
他问我如果要获取前k个最符合的时间复杂度该怎么办，我说heap，结果后面的时间复杂度答错了，
全部 的时间复杂度时nlogk，说成了nlogn,他还确认了一遍，如果跪就跪在这吧，后面然后就是代码实现了，
没啥问题，后面再问问了时间复杂度啥的


4.Given a list of Points, output k Points closest to (0,0)


5.把 arbitrary 个 sorted array merge 成一个sorted array! 
开始没有理解清楚arbitrary， 原来就是给将 K个sorted array merge 成一个sorted array!
