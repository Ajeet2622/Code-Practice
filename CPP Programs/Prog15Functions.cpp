#include<iostream>
using namespace std;

int add(int a,int b);

int main(){
	int n1= 6;
	int n2 = 9;
	int sum = add(n1,n2);
	cout<<sum;
	return 0;
}
int add(int a ,int b){
	return a+b;
}