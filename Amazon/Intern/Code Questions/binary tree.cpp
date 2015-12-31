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

5.LeetCode kth smallest element in BST 时间复杂度


6.Given Tree and Node n and int k, print all node which are at physical distance <=k from n.

7.Validate binary search tree