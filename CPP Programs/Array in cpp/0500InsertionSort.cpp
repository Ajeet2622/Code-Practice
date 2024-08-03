#include<iostream>

using namespace std;

void insertionSort(int *arr , int size);

void printArr(int *arr , int size){
	int ind = 0;
	while(ind<size){
		cout<<arr[ind]<<" ";
		ind++;
	}
}

int main(){
int arr[] = {12,34,24,98,11,10,78};
int size = sizeof(arr)/sizeof(arr[0]);
printArr(arr , size);
insertionSort(arr , size);
cout<<endl;
printArr(arr,size);
	return 0;
}

void insertionSort(int *arr , int size){
	int i = 1;
while(i<size){
	int j = i;
	while(0<j&&arr[j]<arr[j-1]){
		int temp = arr[j];
		arr[j] = arr[j-1];
		arr[j-1] = temp;
		j--;

	}
	i++;
}

}