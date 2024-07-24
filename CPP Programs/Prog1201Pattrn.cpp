#include<iostream>
using namespace std;
int main(){

	for(int i = 1; i <= 5;i++){
		for(int j = 1; j <= i; j++){
			cout<<" "<<j;
		}
		cout<<endl;
	}
	cout<<"\n------------------------\n";
	for(int i = 5; i >0;i--){
		for(int j = 1; j <= 5-i+1; j++){
			cout<<" "<<j;
		}
		cout<<endl;
	}

	
	cout<<"\n------------------------\n";
	cout<<"\n------------------------\n";
	for(int i = 1; i <= 5;i++){
		for(int j = 1; j <=5+1-i; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}

	cout<<"\n------------------------\n";

	for(int i = 5; i >0;i--){
		for(int j = 1; j <= i; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
	cout<<"\n------------------------\n";
	
	for(int i = 5; i >0;i--){
		for(int j = 5 - i+1; j <=5; j++){
			cout<<" "<<j;
		}
		cout<<endl;
	}
	
	cout<<"\n------------------------\n";

	for(int i = 1; i <= 5; i++){
		for(int j = 5 - i+1; j <=5; j++){
			cout<<" "<<j;
		}
		cout<<endl;
	}





	return 0;
}