#include<iostream>
using namespace std;
int main(){
	
	typedef int myinteger;
	typedef char mychar;
	mychar ma = 'A';
	myinteger mi =12312;
	cout<<"myinteger : "<<sizeof(mi)<<endl;
	cout<<"mychar: "<<sizeof(ma)<<endl;


	int a;
	cout<<"int : "<<sizeof(a)<<endl;
	float b ;
	cout<<"float : "<<sizeof(b)<<endl;
	double c ;
	cout<<"double : "<<sizeof(c)<<endl;
	char d ;
	cout<<"char : "<<sizeof(d)<<endl;
	bool e;
	cout<<"bool: "<<sizeof(e)<<endl;


	///data types modifier

	signed int f;
	unsigned int g;
	long int h;
	short int i;
	cout<<"singed int:"<<sizeof(f)<<"\n";
	cout<<"unsigned int : "<<sizeof(g)<<"\n";
	cout<<"long int :"<<sizeof(h)<<"\n";
	cout<<"short int:"<<sizeof(i)<<"\n";
	//cout<<"range:";
	//short char p;
	//long char p;
	unsigned char p;
	cout<<"char: "<<sizeof(p)<<endl;


	


	return 0;
	cout<<"hihi";
}