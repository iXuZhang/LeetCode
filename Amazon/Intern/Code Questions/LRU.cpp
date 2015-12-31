1. LeetCode LRU

amazon以前只要处理200种商品，然后现在要处理200million个。
大家都用一个getItemDetail(id)的function去得到商品信心，但是这个API非常慢。
现在我有一个list<string>,你有什么方法可以speed up吗？

我就说那就用hashtable吧，每次call一下就存进去。最后我返回就返回一个hashtable。
我就写了一下，然后他说你没次都要call 这个API，没提高啊，我有可能给你的id是前五个一样，后五个一样。。 
我说哦 那就之前判断一下，在table里了，就不call了。 他说那如果我call这个函数很多次，那怎么办
比如第一次 input[1,2] output[[1,deatils1],[2,details2]];
第二次 input[1,3] output[[1,details1],[2,details],[3,deatils3]]，
但是我想你ouput[[1,details1],[3,deatils3]], 
我这时才反应过来要用cache,此时已经过去25分钟了。 
完了我就赶紧写了一写，解释一下了。
adam很开心，说exactlly, that's what I am looking for. Excellent.
然后adam说，这个limit很贵啊，你不能无限存啊，没钱啊我们。 
我说哦，那就用LRU吧，他说对对对，你设计一个？
然后就开始设计LRU, 用double-linked list ＋ hashmap, 用过放尾部，最少用的放前面。

恩 hash table要两个 一个是全局的当cache  一个是在方程里的每call一次都要return 一个hash table
因为API太慢，所以每当你call一次api的时候，你就把它存到cache里，
当下次调用的时候先检查cache再决定用不用api  这个方法应该是很基础的，只是换了一个背景，拖了好久才反应过来。

class LRU Cache as global variable;
