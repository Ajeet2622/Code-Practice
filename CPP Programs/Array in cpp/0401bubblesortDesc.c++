#include<iostream>
using namespace std ;
void bubbleSort(int *arr , int size){
	for(int i = 0 ; i < size ; i++){
		for(int j = 0;j<size-1;j++){
			if(arr[j]<arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] =temp;
			}

		}
		// if(i==2){
		// 	cout<<arr[size -1];
		// 	cout<<arr[size -2];
		// 	cout<<arr[size -3];
		// 	cout<<arr[0];
		// 	cout<<arr[1];
		// 	cout<<arr[2];
		// }
		
	}
}
void printArr(int *Arr ,int size){
	for(int i = 0; i < size; i++){
		cout<<Arr[i]<<" ";
	}
}
int main(){
	//int arr[] = {45,23,34,12,67,11,10,23};
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	printArr(arr , n);

	bubbleSort(arr , n);
	cout<<endl;
	printArr(arr , n);
	
	return 0;
}