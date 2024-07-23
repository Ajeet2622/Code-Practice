#include<iostream>
using namespace std;
int main(){
	int number = 7;
	int binary[32];
	int index = 0 ;

	while(number>0){
		binary[index] = number% 2;
		number  = number / 2;
		index++;
		//binary[index] = 0;

	}

	for(int i = index-1; i>=0;i--){
		// binary[index] = 0;
		// cout<<binary[index];
		cout<<binary[i]<<endl;
	}

	return 0;
}