1. LeetCode binary tree level order travesal
2. LeetCode Invert Binary Tree
3. Convert a BST to a Binary Tree such that sum of all greater keys is added to every key
	http://www.geeksforgeeks.org/convert-bst-to-a-binary-tree/
4. reverse a binary tree and return the head node
这个head node 是神马意思呢，就是reverse以后没有parent 的node. 涓€浜�-涓夊垎-鍦帮紝鐙鍙戝竷
比如说
          a
   b          c
                   d

你要变成

d 
    c      b
        a
head node 就是 b d
但是这个node class 呢，是没有parent这个reference的，不过这个倒是不难。
楼主一开始蠢了，用iterative 没写出来，就问算了recursive 可以不，他说可以，
于是就用recursive写了，有一点点小错误，在recuriter的提示下改了。。。
血崩啊血崩，大家不要学我，一开始就作死，后来我朋友（amazon offer）和我说，
你要从简单开始，然后慢慢优化。楼主当时怎么就忘了呢！！！

5.LeetCode kth smallest element in BST 时间复杂度 (高频)

6.Given Tree and Node n and int k, print all node which are at physical distance <=k from n.

7.Validate binary search tree (高频)

8.给一个二叉树，返回一个所有leaf的linked list

9.写个方法，把一个树保存下来 ， 再写个方法，把树还原回去

10.print tree in vertical order
print a binary tree in vertical order
Given a binary tree, print it vertically. The following example illustrates vertical order traversal.

          1
        /    \
       2      3
      / \    / \
     4   5  6   7
             \   \
              8   9 
               
                          
The output of print this tree vertically will be:
4
2
1 5 6
3 8
7
9
Can we use the TreeMap<Integer, ArrayList<Node>> to store all the nodes using inorder traverse. 
Then use the iterator to output the keyset of the ThreeMap?

11.假设有一棵树，被拆分成了许多条边。问如果给定这些边，如何还原这棵树。

12.binary tree,return the number of nodes with only one child in this tree


13.
这时时间已经过了半小时。于是他说不用写代码，设计个数据结构吧。我说，好==。
就是做一个书的词汇索引，输入一个String，返回一个List<Integer>表示该词出现的页码。
于是我说hashmap吧。。他说行，不过可能有什么问题呢？
他说难道key就不会很多？我说英语词汇表里常用的词其实并不多。他说假设这是个双语词汇翻译字典呢== 我说这样的话key就很多了。
于是他说好吧，你看能不能用树结构？我说啊啊啊（原来这是他想要的），这样可以用树结构编码词汇表。


14.树的Zigzag Level Order。 Binary Tree Zigzag Level Order Traversal(高频)

15.leetcode原题，flat binary tree

16.
给一个Binary Tree，找出所有和为k的从root 到 leaf的路径
然后follow up，如果路径可以任何地方结束
再follow up，如果路径可以任何地方开始任何地方结束。

17
symmetric tree 递归和非递归实现 Symmetric Tree LeetCode

18leetcode 173 Binary Search Tree Iterator

19二叉树的平衡判断

20.
给一棵二叉树，定义每个节点的sum为以这个节点为根的所有节点上的数字和。找到一个节点，它的sum离root的sum的一半最近。我写了
一个遍历两次二叉树的解法，先遍历一遍求每个节点sum，然后再遍历一遍找目标节点。问了时间复杂度，然后问怎么改进。提示说sum是
逐层递减的。面试的时候有点紧张，思路不太清楚，就说了先判断应该选择哪个孩子，然后从这个孩子开始往下遍历。
然后他说you get the idea，代码没写完就让问问题了。
其实应该再判断一下选择这个孩子之后abs(child.sum - half)与abs(parent.sum - half)的关系。

21.
然后是leetcode的SameTree，判断两个树是不是相同的
分别用递归和迭代实现出来

22.
Lowest common Ancestor

23.
Print path in Binary Tree.

24.
tree serialization and de-serialization

25.
Coding: 给一个树，输出所有的 Path Sum


26.
How do you serialize a 3-ary tree?
看到就傻眼。这辈子也没deal with过3-ary tree。。
想起leetcode上似乎有binary tree的seralize之法，是combine preorder和inorder traversal, 
于是满脑子都是怎样修改traverse之法以求还原原tree。。然3ary比binary复杂的多，
两个traversal根本无法define一个3ary tree。
绕了一大圈后才开始想number nodes啊用symbol表示connection尔尔。。然后人生初面就如此一败涂地了。


27.
detect a loop in binary tree
follow up:如果已知90%情况下loop存在于前10 level of the tree.如何optimize.

