#include<iostream>
using namespace std;
void fib(int n){
	int n1 = 0,n2 =1;
	for(int i =1 ;i<=n;i++){
		int newNum = n1 +n2;
		cout<<n1<<" ";
		n1 = n2 ;
		n2=newNum;

	}
}
int main(){
	int num =8;
	if(num>0){
		fib(num);
	}
}