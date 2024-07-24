#include<iostream>
using namespace std;
int main(){
	int n = 7;
for(int i = 1; i <= n; i++){
	for(int j = 1; j <= n;j++){
		cout<<j<<" ";
	}
	cout<<endl;
}
cout<<"\n----------------------\n\n";

//hollow rectangle pattern
for(int i = 1; i <= n; i++){
	int j;
		for( j = 1; j <= n;j++){
			if(i == 1 || i == n || j == 1||j ==n){
				cout<<j<<" ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	

	//inverted half Pyramid
	cout<<"\n----------------------\n";
	cout<<"----------------------\n\n";

	for(int i = 1; i <= n; i++){
		for(int j = 1 ; j <= n-i+1; j++){
			//cout<<j<<" ";
			cout<<"* ";
		}
		cout<<endl;
	}
	cout<<"\n----------------------\n\n";
	for(int i = n; i >=1 ; i--){
		for(int j = 1 ; j <= i; j++){
			//cout<<j<<" ";
			cout<<"* ";
		}
		cout<<endl;
	}
	cout<<"\n----------------------\n\n";

	for(int i = n; i >=1 ; i--){
		for(int j = i ; j >= 1; j--){
			//cout<<j<<" ";
			cout<<"* ";
		}
		cout<<endl;
	}
	cout<<"\n----------------------\n";
	cout<<"----------------------\n\n";
	for(int i = 1; i <=n ; i++){
		for(int j = i ; j >= 1; j--){
			//cout<<j<<" ";
			cout<<"* ";
		}
		cout<<endl;
	}
	cout<<"\n----------------------\n\n";
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= i ; j++){
			//cout<<j<<" ";
			cout<<"* ";
		}
		cout<<endl;
	}


	cout<<"\n----------------------\n";
	cout<<"----------------------\n";
	//half pyramid after 180degree rotation
	for(int i = 1 ; i <= n ; i++){
		int j;
		for( j  = 1 ; j < n-i+1 ; j++){
			cout<<"  ";
		}
		int k;
		for(k = j ; k <= n ; k++){
			cout<<"* ";
		}
		cout<<endl;
	}
	cout<<"\n----------------------\n\n";
	for(int i = 1 ; i <= n ; i++){
		int j;
		for( j  = 1 ; j < n-i+1 ; j++){
			cout<<"  ";
		}
		int k;
		for(k = j ; k <= n ; k++){
			cout<<"* ";
		}
		cout<<endl;
	}

	
	cout<<"\n----------------------\n";
	cout<<"----------End!------------\n";
	cout<<"----------------------\n";



	return 0;
}