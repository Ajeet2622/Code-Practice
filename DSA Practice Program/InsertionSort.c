#include<stdio.h>
int main(){
	int arr[] ={12,2343,2,67,13,65,67,89};
	int size = sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr,size);
	printArr(arr,size);
	return 0;
}
void printArr(int arr[] ,int size){
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
void insertionSort(int arr[] ,int size){
	for(int i=0;i<size;i++){
		int key = arr[i];
		int j=i-1;

		while (j>=0&&arr[j]>key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}