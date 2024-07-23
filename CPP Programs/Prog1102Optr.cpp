#include<iostream>
using namespace std;
int main(){
	int a = 2, b = 3, c = 4;
	int k = a-- - b-- - c--;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"k = "<<k<<endl;
	return 0;
}