#include<iostream>
using namespace std;
bool isprime(int a);
int main(){
	int n = 51;
	if(isprime(n)){
		cout<<"prime";
	}else{
		cout<<"Not prime";
	}

	return 0;
}
bool isprime(int num){
	for(int i = 2 ; i<num/2;i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}