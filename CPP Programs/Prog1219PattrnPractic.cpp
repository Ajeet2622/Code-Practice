#include<iostream>
using namespace std;
int main(){
	int n =6;
	for(int i = 0 ; i<n;i++){
		int j;
		for(j = 0; j <= i ; j++){
			cout<<j+1;
		}
		for(j = 2; j < 2*(n-i);j++){
			cout<<" ";
		}
		for(j = i; j>=0;j--){
			cout<<j+1;
		}
		cout<<endl;
	}
	return 0;
}
