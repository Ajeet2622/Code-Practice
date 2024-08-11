#include<stdio.h>
void selection(int arr[],int size);
void printArr(int arr[] ,int size);
int main(){
	int arr[] = {11,2,3,4,5,6,7,8,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	selection(arr,size);
	printArr(arr,size);
	return 0;
}
void printArr(int arr[] ,int size){
	for(int i=0;i<size ;i++){
		printf("%d ",arr[i]);
	}
}
void selection(int arr[],int size){
	for(int i=0; i<size-1; i++){
		int min = i;
		for(int j=i+1; j<size ; j++){
			if(arr[j]>arr[min]){
				min = j;
			}
		}
		if(min!=i){
		int temp = arr[i];
		arr[i]= arr[min];
		arr[min] = temp;
		}
	}
}