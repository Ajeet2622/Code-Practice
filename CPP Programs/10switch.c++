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



	///calculator

	float a,b;
	char op;
	cout<<"Enter Two Numbers: "<<endl;
	cin>>a>>b;
	cout<<"Enter An operator: ";
	cin>>op;

	switch(op){
		case '+' :cout<<a+b;
		break;
		case '-':cout<<a-b;
		break;
		case '*' :cout<<a*b;
		break;
		case '/': cout<<a/b;
		default : cout<<"Please Enter valid Operator (+,-,*,/)";
		
			}



	return 0;
}