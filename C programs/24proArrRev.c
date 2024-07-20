#include<stdio.h>
int main(){
	int arr[] = {3,4,5,6,7,8};
	revArr(arr , sizeof(arr)/sizeof(arr[0]));
	printArr(arr , sizeof(arr)/sizeof(arr[0]));
	return 0;
}
void revArr(int *arr ,int n){
	for(int i = 0;i<n/2;i++){
		int t = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = t;
		//printf("%d\n" , )
	}
}
void printArr(int *arr, int n){
	for(int i = 0;i<n;i++){
		printf("\n%d\n",arr[i]);
	}
}