#include<iostream>

using namespace std;

int setBit(int num,int pos){
	return num|1<<pos;
}

int main(){
	int num = 5;
	int pos = 1;
	cout<<"set "<<setBit(num,pos);
	return 0;
}