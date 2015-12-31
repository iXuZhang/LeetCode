/*
给一个list，存的是iterator，实现一个类implement Iterator，实现它的next和hasNext.
用queue实现了。。。（需要throw exception）。
follow up，再实现它的previous方法，刚开始题意理解错了，
后来才明白要把当前位置的‘指针’往前移，不是单单返回previous的element。。
这样的话，我觉得可以用double－linked list 实现，但是最后没有写完。。当初感觉会跪在这一轮。
*/

next(){
	if(!hasNext()) throw range_error ("Do not have a next value");
}
