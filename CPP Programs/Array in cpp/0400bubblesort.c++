#include<iostream>
using namespace std;
int main(){
	int arr[] = { 4, 3, 6, 2, 9, 0, 2, 7, 8, 5};

	int n = sizeof(arr)/sizeof(arr[0]);

	for(int i = 0; i < n; i++){
		for(int  j = 0; j < n - 1-i; j++){
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
			
		}
	}
	for(int i = 0 ;i < n ;i++){
		cout<<arr[i]<<endl;
	}
	return 0 ;
}