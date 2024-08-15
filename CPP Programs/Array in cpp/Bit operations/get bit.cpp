#include<iostream>
using namespace std;

int getBit(int n,int pos);
int main(){
	int pos=2,num=20;

	cout<<"Bit at "<<pos<<" position is "<<getBit(num,pos);
	return 0 ;
}

int getBit(int n,int pos){
	return (n&1<<pos)!=0;
}