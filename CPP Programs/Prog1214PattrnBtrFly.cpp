#include<iostream>
using namespace std;
int main(){
	int n = 6;
	for(int i = 1 ; i<=n;i++){
		int j; 
		for( j = 1;j<=i;j++){
			cout<<j<<" ";
		}
		for(j = 2*(n-i); j > 0; j-=1){
			cout<<"  ";
		}
		for(j = 1; j <= i; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}



	return 0;
}