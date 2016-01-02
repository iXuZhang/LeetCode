Design

1.battleShip game, 一个二维数组，里面有ship，1表示ship，ship可以是垂直的也可以是横向的，然后有不同type的ship（根据长度不同而不同），写一个方法，判断是否击中，写第二个方法，判断是击中了，还是Miss了，还是击沉了（全部长度都击中了），方法参数是x,y 表示二维数组的坐标

(1)判断是否hit难道不就是判断当前的值是否为1么！！！！！！！然后就直接写了一行。。。写完后他看了看，好像不满意，这时候没多少时间了，她说你就这样理解吧
(2)第二个函数2B的用DFS写了，因为脑子秀逗了，连终止条件都没写。。。TM就成了个死循环了面试官说，你用递归写？interesting，然后就没下文了，让我继续写=。=。。。难道是图论。。。？感觉到第45分钟了还是没能理解题目意思，，，后来还写了Ship的Class啥的



2. design a parking lot系统



3. desgin a 自动售货机



4.你一个用户ID，一个函数返回ID的朋友列表，一个函数返回ID买过的商品。让你设计给这个用户推荐商品。
记得考虑要加上用户自己买过的商品就行了，follow up还说了利用年龄、区域类的进行优化。



5.写个colorPoint类，里面要有equals方法，判断两个colorPoint是不是equals, 
follow up是参数改为Object，判断是不是equals。要先判断Object的class （特别是colorPoint的derived class）


6.设计题，问interface是什么意思，然后设计一个Deck类


5.Design BlackJack Card Game
 设计一个deck类和card类.card不需要operation, deck需要有shuffle和另一个类似于pop的method去操作一个card的collection.
 貌似这題crack code interview里面有

6.Design 设计一个飞机场，要求有合适的指挥调度系统，要求写有哪些类，哪些方法


7.说有一个retailer,想keep record顾客的喜好，三个class，teacher, student, mother,然后让设计class。
还加问了一个如果想给既是teacher又是mother的人给个discount怎么设计


8.餐馆预约系统 