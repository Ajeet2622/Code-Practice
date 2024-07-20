#include<stdio.h>

int main(){
	int arr[3];
	printf("Enter price 1st item : ");
	scanf("%d",&arr[0]);
	printf("Enter price 2nd item : ");
	scanf("%d",&arr[1]);
	printf("Enter price 3rd item : ");
	scanf("%d",&arr[2]);

	printf("\nprice of 1st item : %f\nprice of 2nd item : %f\nprice of 3rd item : %f\n",arr[0]*(1.18),arr[1]*(1.18),arr[2]*(1.18));

	return 0;
}