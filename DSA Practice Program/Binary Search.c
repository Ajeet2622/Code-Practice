#include<stdio.h>
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int scount=0;
	int size = sizeof(arr)/sizeof(arr[0]);
	int key =1;
	int a = binary_search(arr,0,size,key,&scount);
	if(a>0){
		printf("element found : %d",a);
	}
	printf("\ncount: %d",scount);

	return 0;
}

int indexerror(){
	printf("Index erroe occured!");
	return 0;
}
int eleNexist(){
	printf("Element Does't exit");
	return -1;
}

int binary_search(int arr[], int st,int end,int key,int *p){
	(*p)++;
	//printf("\ncount: %d",*p);
	int mid = (st+end)/2;

	if(st>end){
		return indexerror();
	}

	if(arr[mid]==key){
		return mid;
	}
	if(arr[0]>key || arr[end]<key){
		
		return eleNexist();
	}

	if(arr[mid]<key){
		st=mid+1;
		binary_search(arr,st,end,key,p);
	}
	else if(arr[mid]>key){
		end=mid-1;
		binary_search(arr,st,end,key,p);

	}

	return 1;
}