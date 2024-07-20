#include<stdio.h>

void howManyTimes(int arr[],int n,int keys);
int main(){
	int findMe = 5;
	int arr[34] ={1,2,3,1,2,4,3,1,2,3,4,5,4,3,2,1,2,3,3,4,4,3,2,1,3,3,3,2,1,1,2,3,3,5};
	int size  = sizeof(arr)/sizeof(arr[0]);
	howManyTimes(arr , size , findMe);
	return 0 ;	
}
void howManyTimes(int arr[],int n ,int key){
	printf("total number of Elements : %d\n",n);
	//for(int i)
	int count = 0;
	for(int i = 0; i < n ;i++){
		//printf("%d\t" , arr[i]);
		//int count;
		countMe(arr[i] , key , &count);
	}
	printf("count of %d : %d\n",key , count);
	printf("\n");
}
void countMe(int ele, int key , int *comp){
	//int count = 0;
	if(ele == key){
		//count++;
		*comp = *comp + 1;
		//printf("\ncounme : %d\n",*comp);
	}
}
// int *ptr = arr;
// int *ptr = arr[0];