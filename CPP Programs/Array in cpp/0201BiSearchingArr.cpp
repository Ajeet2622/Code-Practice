#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key);

int main(){
	int key = 17;
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,17};
	int n = sizeof(arr)/sizeof(arr[0]);
	int a = binarySearch(arr,n,key);
	cout<<a;
	return 0;
}
int binarySearch(int arr[], int n, int key){
	int start  = 0;
	int end = n ;
	int count =0;
	while (start<end)
	{count++;
		int mid = (start+end)/2;
		 //start/2+end/2;
		 if(arr[mid]==key){
			return mid;
		 }else if(arr[mid]>key){
			end = mid -1;
		 }else if(arr[mid]<key){
			start = mid + 1;
		 }
	}
	
	return -1;
	
}