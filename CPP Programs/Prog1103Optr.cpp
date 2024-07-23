#include<iostream>
using namespace std;
int main (){
	typedef int myint;

	myint i = 10, j = 20, k;
	k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
	
	cout<<"i = "<<i<<endl; //>> i = 10
	cout<<"j = "<<j<<endl; //>> j = 20
	cout<<"k = "<<k<<endl; //>> k = -20
	return 0;
}