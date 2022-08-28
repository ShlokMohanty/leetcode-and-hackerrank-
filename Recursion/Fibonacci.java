public class Fibonacci {
public static void main(String[] args) {
	System.out.println(fibo(4));
	
}
static int fibo(int n) {
	if(n<2) {
		return n;
	}
	
	return fibo(n-1)+fibo(n-2);
}
}

// n=0 : fib(0) : 1 return 0
// n=1 : fib(1) : 1 return 1
// n=2 : fib(2) : 2 = 2 : return fib(n-1) + fib(n-2) : fib(1) + fib(0) : 1 + 1 : 2 
//n=3 : fib(3): 3>2 : return fib(n-1)+fib(n-2): fib(2)+ fib(1) : 2 + 1 : 3
// n=4 : fib(4): 4>2 : return fib(n-1)+fib(n-2) : fib(3) + fib(2) : 3 + 2 : 5
