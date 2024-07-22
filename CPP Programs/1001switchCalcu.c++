#include<iostream>
using namespace std;
int main(){

	//calculator

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
