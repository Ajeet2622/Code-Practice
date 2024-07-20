#include<stdio.h>

int main(){
	int arr[3];
	int *ptr = &arr[0]; //same for pointer 
	//int *ptr = arr;
	myAadhar();
	return 0;
}
void myAadhar(){
	/*int arr[] = {34,32,56,7,78,89,67,78,67,65};
	int *ptr = &arr[0];
	for(int i = 0; i<sizeof(arr)/sizeof(arr[0]);i++){
	}*/
int arr[10];
int* ptr = arr;
for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
	

}
for(int i = 0; i<sizeof(arr)/sizeof(arr[0]);i++){
	printf("%d\n", *ptr);
	ptr++;
}

}