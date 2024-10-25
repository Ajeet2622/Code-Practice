#include<iostream>
#include<limits.h>
using namespace std;
int minHere(int arr[],int n){
	int mini = INT_MAX;
	for(int i = 0;i<n;i++){
		if(arr[i]<mini)
		mini = arr[i];
	}
return mini;
}
int maxHere(int arr[] , int n){
	int maxa = INT_MIN;
	for(int i = 0; i < n;i++){
		if(arr[i]>maxa)
		maxa = arr[i];
	}
	return maxa;
}
int main(){
	int arr[] = {12,4,23,34,12,34,56,76,8};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout<<"MIN : "<<minHere(arr,n)<<endl;
	cout<<"MAX : "<<maxHere(arr,n);
	return 0;
}