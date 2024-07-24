#include<iostream>
using namespace std;
int main(){
	int n = 8;
	
cout<<"\n-----------g-----------\n\n";

	for(int i = n ; i > 0;i--){
		for(int j = i; j >1 ;j--){
			cout<<"  ";
		}
		for(int j = 1; j <= n; j++ ){
			cout<<"* ";
		}
		cout<<endl;
	}
	

	cout<<"\n----------------------\n\n";
	for(int i = n ; i > 0;i--){
		for(int j = i; j >1 ;j--){
			cout<<"  ";
		}
		for(int j = n; j <= n; j++ ){
			cout<<"* ";
		}
		cout<<endl;
	}

	cout<<"\n----------------------\n\n";
	for(int i = n ; i > 0;i--){
		for(int j = i; j >1 ;j--){
			cout<<"  ";
		}
		for(int j = n; j <= n+1; j++ ){
			cout<<"* ";
		}
		// int  k=i;
		// if(k == i){
		// 	for(k = 1 ; k <= i ;k++){
		// 	cout<<"* "<<endl;
		// 	k++;
		// 	}
		// }
		cout<<endl;
	}

return 0;
}
