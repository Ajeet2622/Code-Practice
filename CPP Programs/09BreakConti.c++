#include<iostream>>

using namespace std;
int main(){
	int a=90;
	while(true){
		cout<<a<<endl;
		a++;
		if(a>1000){
			break;
		}else{
			cout<<"Not satisfied"<<endl;
		}
	}
	return 0;

}