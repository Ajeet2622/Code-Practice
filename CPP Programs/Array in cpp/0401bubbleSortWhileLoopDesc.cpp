#include<iostream>
using namespace std ;

void printArr(int* arr, int n){
	int counter = 0;
	while (counter<n)
	{
		cout<<arr[counter]<<" ";
		counter++;
	}
	
}

void bubbleWhileL(int* arr , int size){
	int counter = 1;
	while(counter<size){
		int i=0;
		while(i < size - counter){
			if(arr[i]<arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
			i++;
		}
		counter++;
	}
}
int main(){
	int arr[] = {1,2,3,4,5,6,7};
	int n =sizeof(arr)/sizeof(arr[0]);
	printArr(arr ,n);
	bubbleWhileL(arr,n);
	cout<<endl;
	printArr(arr,n);
	return 0;
}