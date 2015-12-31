1.LeetCode valid parentheses

2.valid parentheses的变种 小括号变成了大括号 里面有文字啥的 . 
follow up说“abc”{“abc”}这样不行 就是必须字母外要有括号 这其实多加一个if就可以解决的。

3.close parentheses, 只有这种:(). 
我问他如果是空字符串返回啥, 他说你觉得应该是啥. 我说exception, 然后我写了个nullpointerexception. 
他说用illegalelementexception更好. 
写完他直接指出了一个bug, 少了一个括号......然后说还有一个, 写了个(())()的case让我找错, 看了半天没看出来, 然后他直接告诉我 for (int i = 0; i < input.length()-1; i++) 这一行不该有-1啊....
说完又问我如何简化, 我也看不出来. 然后他说可以在最后直接return stack.isEmpty(); 
接着又问我还能怎么简化, 在提示下写出了开始的时候判断输入字符数. 字符数应该是even number.

