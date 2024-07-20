#include<iostream>
using namespace std;
int main(){
	int num = 100;
	int n = 2;
	int div = 2 ;
	for(div = 2; div<n ; div++){
			if(n%div==0){
				cout<<"Not prime"<<endl;
				break;
			}
		}
	return 0;
}