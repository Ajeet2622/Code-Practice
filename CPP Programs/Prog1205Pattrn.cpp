#include<iostream>>
using namespace std;
int main(){
	int n = 6;

	int count = 0;
	for(int i = n ; i > 0 ; i--){
		int count = 0;
		for(int j = 1; j <=n-i+1 ; j++){
			count+=1;
			cout<<count<<" ";
		}
		cout<<endl;
	}
	
	return 0 ;
}