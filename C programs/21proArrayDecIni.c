#include<stdio.h>


void printArr(int arr[],int k); 
int main(){
	int arr[] = {34,56,75};
	int d=sizeof(arr)/sizeof(arr[0]);
    printArr(arr, d);
	_printArr(arr,d);
	return 0;
}

void printArr(int arr[], int n){
	//printf("%d  %d   %d \n",d,sizeof(arr),sizeof(arr[0]));
	for(int i = 0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}
void _printArr(int *ptr ,int n){
	for(int i = 0;i<n;i++){
		printf("   %d\n",ptr[i]);
	}
}