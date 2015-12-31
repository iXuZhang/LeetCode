/*
关于非法输入的返回值，错误的返回值，一定要用exception，要有meaningful的提示。
*/

if(res > INT_MAX || res < INT_MIN) throw overflow_error("Overflow");
try{
		reverseInt(INT_MAX);
} 
catch(const overflow_error &e){
	cout<< e.what() << endl;
	return 0;
}



throw invalid_argument( "received negative value" );
try {
    compare( -1, 3 );
}
catch(const invalid_argument& e ) {
    // do stuff with exception... 
}


exception:
1.logic_error:

domain_error
invalid_argument
length_error
out_of_range
future_error

2.runtime_error

range_error
overflow_error
underflow_error
system_error

range_error: The class range_error defines the type of objects thrown as exceptions to report range errors in internal computations.

out_of_range: The class out_of_range defines the type of objects thrown as exceptions to report an argument value not in its expected range.

overflow_error: The class overflow_error defines the type of objects thrown as exceptions to report an arithmetic overflow error.

underflow_error: The class underflow_error defines the type of objects thrown as exceptions to report an arithmetic underflow error.