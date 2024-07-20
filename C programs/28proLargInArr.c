#include<stdio.h>
void inputArr(int arr[], int n);
void fun();
//void me(int arr[], int n, double arr1[], int m);
void me(int arr[] , double arr1[]);

int main(){
	int arr[10];
	//int d =sizeof();
	//inputArr(arr,d);
	fun();
	return 0;
}
void inputArr(int arr[], int n){
	for(int i = 0; i < n ;i++){
		scanf("%d",&arr[i]); 
	}
}
void fun(){
	int arr[] = {4,5,6,8};
	double arr1[] = {4,5.0,6.90,8};
	me(arr , arr1);
	printf("fun me");
}
 void me(int arr[] ,double arr1[]){
	int a = sizeof(arr);
	printf("%d\n", a);
	int b =sizeof(arr1);
	printf("%d\n", b);
	printf("\n%d\n",sizeof(double));
 }























