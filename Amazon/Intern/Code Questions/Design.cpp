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
BlackJack Game
Deck design (shuffle) 的问题。follow up 是design a card game with 2 players, each with 5 cards. 
设计一个deck类和card类.card不需要operation, deck需要有shuffle和另一个类似于pop的method去操作一个card的collection.
貌似这題crack code interview里面有
pocket cards design

6.Design 设计一个飞机场，要求有合适的指挥调度系统，要求写有哪些类，哪些方法


7.说有一个retailer,想keep record顾客的喜好，三个class，teacher, student, mother,然后让设计class。
还加问了一个如果想给既是teacher又是mother的人给个discount怎么设计

8.餐馆预约系统 

设计一个hotel的设计
system design: hotel management system, online booking system

9 track busses and busstops in a city

10 设计动物园(animal kingdom)
时间有限，没有太多细节
Animal做abstract class
然后Bird， Mammal 继承Animal
然后Mocking Bird 继承了Bird. Waral 鍗氬鏈夋洿澶氭枃绔�,
Bird类implement了一个Fly的Interface （这里被调侃了，他说企鹅怎么办。。企鹅是bird但是不会飞，当时有点尴尬。。就说我不知道）
面试官会让你边设计边在里面添加一些方法和变量，比如Animal可以有weight，habitat什么的~bird可以有羽毛，颜色，飞行姿势等等.

一个游戏场景里有很多cat，dog，fish，bird等等动物，怎么设计类。这题比较自由，任何合理的设计都是可以的。
我提到了abstract class，polymorphism，factory pattern，等等。这种开放题就要尽量show出你的OO Design知识

11 计一个wallet，聊聊要什么方法，
中间还问了几个 java问题 Abstarct class和 Interface区别啥的 
class和object的区别， 什么是inheritance
不写代码，口头讲思路，比如会有哪个几class，每个class有些什么成员变量和函数

