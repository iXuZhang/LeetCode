DFS

题目是letter playboard，让找word。Leetcode上的题（word search,不一样的是对角线也可以），
不过这次是要在dictionary里面找，我说那我从dictionary里面拿一个word在board里面找，一直找到dict结尾。
先要跟他说思。做完之后follow-up,如果dictionary是1million 大小怎么办。。。
完全不知道。。只能说因为playboard比较小，可以根据一些不存在的character来减小dictionary搜索范围。
之后他写如果提供is_word(word)这个function可以判断单词是否在dictionary里面存在，怎么写。
我说基本思路差不多，改一下就行，他说那你改吧。。。我就一点一点改。。
中间word.push_back(character)只记得push忘了remove，然后被指出来了