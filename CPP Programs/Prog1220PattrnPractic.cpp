#include<iostream>
using namespace std;
int main(){
	int n =6;
	for(int i = 0 ; i<n;i++){
		int j;
		for(j = 0; j <= i ; j++){
			cout<<j;
		}
		for(j = 2; j < 2*(n-i);j++){
			cout<<" ";
		}
		for(j = i; j>=0;j--){
			cout<<j;
		}
		cout<<endl;
	}
	cout<<"\n-------------\n\n";
	for(int i = 0 ; i<n;i++){
		int j;
		for(j = 0; j <= i ; j++){
			cout<<j;
		}
		for(j = 1; j < 2*(n-i);j++){
			cout<<" ";
		}
		for(j = i; j>=0;j--){
			cout<<j;
		}
		cout<<endl;
	}
	cout<<"\n-------------\n\n";
	for(int i = 0 ; i < n ; i++){
		int j;
		for(j = 0; j <= i ; j++){
			cout<<j;
		}
		for(j = 0; j < 2*(n-i) ; j++){
			cout<<" ";
		}
		for(j = i; j >= 0; j--){
			cout<<j;
		}
		cout<<endl;
	}
	for(int i = 0 ; i < n ; i++){
		int j;
		for(j = 0; j <= n-1-i ; j++){
			cout<<j;
		}
		for(j = 0; j < 2*(i+1) ; j++){
			cout<<" ";
		}
		for(j = i; j < n; j++){
			cout<<n-j-1;
		}
		cout<<endl;
	}
	
	return 0;
}
