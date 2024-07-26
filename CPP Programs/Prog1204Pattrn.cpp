#include<iostream>>
using namespace std;
int main(){
	int n = 6;
	//floyd's triangle
	int count = 0;
	for(int i = n ; i > 0 ; i--){
		
		for(int j = 1; j <=n-i+1 ; j++){
			count+=1;
			cout<<count<<" ";
		}
		cout<<endl;
	}
	
	return 0 ;
}