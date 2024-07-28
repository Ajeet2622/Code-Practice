#include<iostream>
using namespace std;
int main(){
	int n = 6;
	for(int i = n ; i>0 ; i--){
		int j;
		for(j = i; j > 1; j-- ){
			cout<<" ";
		}
		for(j = 1; j < n - i+1;j++ ){
			cout<<j;
		}
		for( j = n-i+1 ; j >0 ; j--){
			cout<<j;
		}
		
		cout<<endl;
	}
	for(int i = n ;i > 0 ;i--){
		int j;
		for(j = 0 ; j < n-i ; j++){
			cout<<" ";
		}
		for(j = i ; j > 0 ; j--){
			cout<<i-j+1;
		}
		for(j = i; j > 1; j--){
			cout<<j;
		}
		cout<<endl;

	}
	
	return 0 ;
}