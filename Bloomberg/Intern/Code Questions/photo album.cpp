
/*
假设有个相册，每一页上面有很多照片，给你个函数可以对一页上的所有照片分析返回里面所有的人的<lastname, firstname>，现在想让你处理完之后能输出一个按照lastname然后firstname排列的表格，表格第二列是这个人所出现的所有照片所在的页数。
*/

Key
map<string,vector> photos
人名整个作为map的key，
vector<int> 存放页数，如果同一页出现了两次，不再放入
