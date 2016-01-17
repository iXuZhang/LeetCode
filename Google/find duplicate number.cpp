
1.find duplicate number
follow up：有没有其他办法？我第一反应是O(nlogn)的做法，需要排序，看adjacent number
2.find duplicate number，但是这里要求是在某一个范围k内的
sliding window， use a unorder_set;
3.find close number，还是要求范围k内，close的定义就是，两个数字的差的绝对值小于等于某个数d.

对应LeetCode
Contains Duplicate 
Contains Duplicate II
Contains Duplicate III