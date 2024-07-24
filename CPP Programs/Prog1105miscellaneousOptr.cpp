#include<iostream>
using namespace std;
int main(){
	int a = 78;
	//1Byte = 8bits OR 
	//1B = 8b 
	//B->Bytes and b->bits
	cout<<sizeof(a)<<" bytes"<<endl;

	float b;
	cout<<sizeof(b)<<"\n";//outpur 4

	char c;
	cout<<sizeof(c)<<"\n";//outpur 1

	double d;
	cout<<sizeof(d)<<"\n";//outpur 8
	cout<<"hih\n";

	bool e;
	cout<<sizeof(e)<<"\n";//outpur 1


	return 0;
}