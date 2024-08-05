#include<iostream>
using namespace std;

void selectionSort(int arr[],int n);

int main(){
	int arr[] = {11,5,2,5,4,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr,n);

	return 0 ;
}
 
 void selectionSort(int arr[],int n){
	int ind;
	for(int i = 0; i <n;i++){
		int j = ind = 0;
		while (j < n-i)
	     {
	     if(arr[j]<arr[ind]){
			ind = j;
		 }
		 j++;
	     	/* code */
	     }


	}
	
 }