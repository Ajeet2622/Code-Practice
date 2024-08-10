#include<stdio.h>


int partition(int arr[],int low,int high);
void quickSort(int arr[],int low,int size);
void swap(int *a , int *b);


void printArr(int arr[],int size){
	for(int i = 0; i<=size;i++){
		printf("%d ",arr[i]);
	}
}


int main(){
	int arr[]={12,11,10,9,8,7,6,5,4,3,2,1};
	int n =sizeof(arr)/sizeof(arr[0]);
	int low =0;
	// printf("%d\n",n);
	quickSort(arr,low,n-1);
	// printf("%d",arr[3]);
	printArr(arr,n-1);
	return 0 ;
}

int partition(int arr[],int low,int high){
	if(low>high){
		return 0;
	}
	int pivot = arr[low];
	int idx=0;
	for(int j=1; j<=high;j++){
		if(arr[j]<=pivot){
			idx++;
			swap(&arr[j],&arr[idx]);
			//if(idx==3){
			// printf("%d=%d\n",idx,arr[idx]);
			//printf("%d",arr[j]);
			//break;}
		}
	}
	swap(&arr[idx],&arr[low]);
			// printf("%d=%d\n",idx,arr[idx]);
			// printf("%d=%d\n",low,arr[low]);

	return idx;
}
void quickSort(int arr[],int low,int size){
	// printf("%d\n",low);
	// printf("%d\n",size);
	if(low>size)
	return 0;
	int pi = partition(arr,low,size);
	//printf("%d",pi);
	quickSort(arr,low,pi-1);
	quickSort(arr,pi+1,size);

}
void swap(int *a , int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}