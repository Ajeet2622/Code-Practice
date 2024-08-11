#include<stdio.h>
int main(){
	//int arr[] = {12,34,2,56,7,8};
	int arr[] = {3,9,1,6,2,6};
	int size =sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,size);
	printArr(arr,size);
	return 0;
}
void printArr(int arr[], int size){
	for(int i=0 ;i<size;i++){
		printf("%d ",arr[i] );
	}
}

void bubbleSort(int arr[],int size){
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
			 int temp = arr[j];
			 arr[j] = arr[j+1];
			 arr[j+1] = temp;
			}
		}
	}
}