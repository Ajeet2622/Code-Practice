#include<iostream>
using namespace std;

int main(){
	int arr[] = {34,65,23,13,5,22,89,10,9,234};
	int size = sizeof(arr)/sizeof(arr[0]);

	for(int i = 1 ; i<size;i++){
		int curr = arr[i];
		int j = i-1;
		for(j = i-1;arr[j]>curr && j>=0;j--){
			arr[j+1] = arr[j];
		}
		arr[j+1] = curr;
	}
	for(int i = 0;i<size;i++){
		cout<<arr[i]<<" ";
	}


	return 0 ;
}