#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n);
void checking(int a, int b);
void checkingPtrn(int a);

int main(){
	int a,b;
	cin>>a>>b;
	checking(a,b);
	return 0 ;
}

void checking(int a , int b){
for(int i = a ; i<=b;i++ ){
	if(isPrime(i)){
		cout<<i<<endl;
		checkingPtrn(i);
	}
}
}
bool isPrime(int n){
	for(int i = 2; i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;

}
void checkingPtrn(int n){
	 int num = n % 6;
	 cout<<"reminder : "<<num<<endl;
}