#include<iostream>
using namespace std;
int main(){
	int arr[]={2,4,1,869,12,4,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	int key = 89;
	for(int i = 0;i < size; i++){
		if(arr[i]==key)
		cout<<"Found";
	}
	return 0;
}