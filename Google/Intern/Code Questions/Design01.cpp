/*
给一个list（每个item是一个pair）和一篇文章， 求哪些pair出现在了文章里。然后就是花样follow up：文章长怎么办，list长怎么办。
*/

list - pair - i,j  m
text n
unordered_set(text) -> words without duplicate
go through the list
Time O(m+n)
Space O(m)


1. long list
检查text的文字的排列组合是否都出现过。

2. long text
检查list是否完成
unordered_set(list) remove if have one in text
