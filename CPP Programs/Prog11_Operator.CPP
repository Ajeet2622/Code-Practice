#include<iostream>
using namespace std;
int main(){
	int a = 9 , b ;
	//unary oprator ++,-- 

	//post increment , increment but not assigned to b variable here
	b = a++;
    cout<<"a = "<< a <<", b = " <<b<<endl;

//increment instantly , increment and assigned to b variable
	b = ++a;
	cout<<"a = "<< a <<", b = " <<b<<endl;

	//Examples
	int k = 4;
	k = k++ + ++k;
	cout<<"k1 = "<<k<<endl;
	k = k++;
	cout<<"k2= "<<k<<endl;
	k = ++k;
	cout<<"k3 = "<<k<<endl;
	k = k++ + ++k;
	cout<<"k1 = "<<k<<endl;

	//special
	cout<<"--------------here-------------"<<endl;
	int c = 2;
	cout<<"c = "<<c<<endl;
	c = c++;
	cout<<"c++ = "<<c<<endl;
	c = ++c;
	cout<<"++c = "<<c<<endl;
	// int c = 2, p;
	// cout<<"c = "<<c<<endl;
	// p = c++;
	// cout<<"c++ = "<<p<<endl;
	// p = ++c;
	// cout<<"++c = "<<p<<endl;

	// c = c++ + c++;
	// cout<<"c++ + c++ = "<<c<<endl;

	// int p ,q;
	// c = ++c;
	// cout<<"p = "<<c<<endl;
	// c = ++c;
	// cout<<"q = "<<c<<endl;

    // int p;
	// p = ++c + ++c;
	// cout<<"++c + ++c = "<<p<<endl;

	// c = c++ + c++; //output = 7
	// cout<<"c++ + c++ = "<<c<<endl;

	// c = c++ + ++c; //output = 8
	// cout<<"c++ + ++c = "<<c<<endl;

	// c = ++c + c++; //output = 9
	// cout<<"++c + c++ = "<<c<<endl;

	c = ++c + ++c; //output = 10
	cout<<"++c + ++c = "<<c<<endl;
	


	return 0;
}