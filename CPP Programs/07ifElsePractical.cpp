#include<iostream>
using namespace std;
int main(){
	int money = 9000;
	for(int date = 1 ; date%2!=0, date<30;date++){
		if(date%2!=0){
			continue;
		}
		else{
			if(money<500){
			break;
		}
			cout<<date<<"go to the out "<<money<<"Rs"<<endl;
			money = money -300;
		}
	}
	return 0;
}