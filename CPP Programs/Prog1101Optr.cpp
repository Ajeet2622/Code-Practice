#include<iostream>
using namespace std;
int main(){
	int a = 0; 
	a = a++ + --a + ++a - --a;//output =1;
	cout<<"A = "<<a<<endl;
	return 0;
}