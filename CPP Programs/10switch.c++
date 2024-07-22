#include<iostream>

using namespace std;

int main(){
	typedef int myinteger;
	myinteger num = 3;
	//cout<<num<<endl;

	switch(num){
		case 1 :
			cout<<"Monday"<<endl;
			break;
		
		case 2 :
			cout<<"tuesday"<<endl;
			break;

		
		default:
			cout<<"default\n";
		
	}
	cout<<"I am outside the switch."<<endl;

	return 0;
}