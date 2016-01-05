dynamic programming

1.pyramid max path sum...就是最简单的能向下走，向右下走的...也演了一下用dp秒了...
2.给房子paint color，相邻颜色不同，每种颜色花费不同，求总花费最少。
3.给一个sorted array,求总共可以构成BST的数目 == Unique Binary Search Trees LeetCode

4.fibonacci数列
Given an integer n, write a function to return the Nth number in the Fibonacci series..
那题，返回第n个数。 我写了个for loop的。他说可以，然后让写个recursion的。
写完之后他问time complexity， 我呵呵呵的跟他说O(n).
他也没说什么，就问还能不能improve， 一下心又凉了半截，要怎么improve。 想了一会儿，发现没用lookup table!! 
我就说是不是要用lookup table。 他呃呃呃了半天，我也不造我说的对不对，他就让我说下为什么要用lookup table，
举个例子什么的，我就说避免重复计算啊啥的。然后他让我写出来， 就写了。写完继续问time complexity。 
我说现在应该是O(n)了

Fibonacci return小于M的最后N个数，然后问了一下优化，
nth fibonacci (recursion, dp)


第一个是输出个斐波那契数列，很快写完了，然后follow up如果那个数N很大，如何处理，
当时知道分开处理，但脑子有些乱，说能说出来，代码老写乱了。


斐波那契数列：我先写了个f[n]=f[n-1]+f[n+1]的
follow up1: 空间复杂度太高，换个低的－－然后就换了那个用几个temp存之前的值的，space 变成了Constant
follow up2: 问我第一个方法用什么testcase，我也没明白为什么要问这个，然后发现前面有个小bug，没有考虑n=0,1,2的时候加了个if statement
follow up3: 问我那n为负数怎么办，然后我就又加了个if statement

斐波那契。 一开始用三变量做完 那个阿三follow up 用递归。 然后递归写好， 他说复杂度太高， 然后写了个O（n^2）， 
他说还是太高， 然后写了个hashmap存中间值， 然后他让写test cases。 写完 居然已经40分钟了。

然后优化边界条件，然后各种优化，问如果数特别大如何解决，各种说错，然后在他再三提示下才说出来。. 


怎么判定一个数是fibonacci数？由于时间不够了，只让我讲思路，
我说写个函数算出第一个大于等于该数的fibonacci数，如果是等于就是，大于就不是。

5.就是给一个MxN的矩阵，有一个robot从左上角要走到右下角