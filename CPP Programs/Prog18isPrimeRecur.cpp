#include<iostream>
using namespace std;
bool isPrime(int n,int d);
int main(){
	int num = 61;
	if(isPrime(num,2)){
		cout<<"Prime";
	}else{
		cout<<"Not prime";
	}
	return 0 ;
}
bool isPrime(int n ,int divisor){
	if(n<=2){
		return (n == 2) ? true : false;
	}
	if(n%divisor==0){
		return false;

	}
	if(divisor*divisor>n){
		return true;
	}
return isPrime(n,divisor+1);

}