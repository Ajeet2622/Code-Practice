#include<iostream>
using namespace std;
void fib(int n,int n1, int n2){
	cout<<n1<<" "<<n2<<" ";
	int newNum;

	for(int i = 1; i < n -1 ; i++){
		newNum = n1 + n2;
		cout<<newNum<<" ";
		n1 = n2;
		n2 = newNum;
	}


}
int main(){
	int num = 8;
	int n0=0,n1=1;
	if(num==0){
		cout<<"Please Enter A Positive Number.";
	}
	else if(num==1){
		cout<<n0;
	}else if(num==2){
		cout<<n0;
		cout<<" "<<n1;
	}else if (num>2){
		fib(num,n0,n1);

	}
	else{
		cout<<"Con't Find, Please Enter a valid Input.";
	}

	return 0;
}