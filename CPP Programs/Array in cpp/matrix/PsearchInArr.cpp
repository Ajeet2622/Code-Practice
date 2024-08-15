#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int key;
	cin>>key;
	float arr[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			// cout<<arr[i][j];

			if(arr[i][j]==key)
			cout<<"Element Found At "<<i+1<<"th Row "<<"and "<<j+1<<"th column.";
		}
	}
	return 0;
}