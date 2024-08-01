#include<iostream>
using namespace std;
int main(){
	int n = 5;
	for(int i = n; i > 0; i--){
		int j;
		for( j = 2*i ; j>0;j--){
			cout<<" ";
		}
		for(j =0 ; j<=2*(n-i);j++ ){
			cout<<" *";
		}
		cout<<endl;
	}
	return 0;
}