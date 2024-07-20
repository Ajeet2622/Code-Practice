#include<stdio.h>
int fib(int n);
int main(){
	int n;
	 n = fib(6);
	 printf("final : %d",n );
	return 0;
}
int fib(int n){
	if(n==0){
		return 0 ;
	}
	else if(n==1){
		return 1;
	}
	int num = fib(n-1) + fib(n-2);
	//num+=num;

	printf("n = %d and %d\n", n, num);

	return num;
}