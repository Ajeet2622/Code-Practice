#include<iostream>>
using namespace std;
int main(){
	int n = 6;
	
	int count = 0;
	for(int i = n ; i > 0 ; i--){
		for(int j = 0; j < i ;j++){
			cout<<"   ";
		}
		
		for( int j = 0; j <=n-i; j++){
			count+=1;
			cout<<" "<<j+i<<" ";
		}
		// for( int k = n-i+1 ; k > 1; k--){
		// 	count+=1;
		// 	cout<<k<<"  ";
		// }
		// for(int j = 1; j < n-i; j++ ){
		// 	//cout<<"  "<<j;
		// 	cout<<" "<<j<<" ";
		// }
		//for( int j = 2; j <=n-i+1; j++){
		for( int j = n-i-1; j>=0 ; j--){
			count+=1;
			cout<<" "<<j+i<<" ";
		}

		cout<<endl;
	}
	
	return 0 ;
}