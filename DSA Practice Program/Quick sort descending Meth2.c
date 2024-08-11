#include<stdio.h>


void printArr(int arr[],int size);
void swap(int *a,int *b);
int partition(int arr[],int low,int high);
void quickSort(int arr[],int low,int high);

int main(){
	//   int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
	  int arr[]={13,12,11,10,9,18,7,6,5,4,33,2,1};
	  int low = 0;
	  int high = sizeof(arr)/sizeof(arr[0]);
	  quickSort(arr,low,high-1);
	  //printf("%d",arr[3]);
	  printArr(arr,high);
	return 0 ;
}

void swap(int *a,int *b){
int temp = *a;
*a = *b;
*b = temp;
}

void printArr(int arr[],int size){
	for(int i=0; i<size; i++){
		printf("%d ",arr[i]);
	}
}

int partition(int arr[],int low,int high){
	// 	printf("%d\n",low);
	// printf("%d",high);
	// if(low>high)
	// return 0;
	// 	printf("%d\n",low);
	// printf("%d",high);
	int pivot = arr[high];
	int idx=low-1;
	for(int i = low; i <=high;i++){
		if(arr[i]>=pivot){
			idx++;
			// printf("parti %d\n",idx);
			swap(&arr[i],&arr[idx]);
		}
	}
	if(idx==-1){
		idx=high;
	}
	swap(&arr[idx],&pivot);
	//printf("%d",idx);
	return idx;
}

void quickSort(int arr[],int low,int high){
	// printf("%d\n",low);
	// printf("%d",high);

	if(low<high){
	int pi = partition(arr,low,high);
	// printf("main %d\n",pi);
	quickSort(arr,low,pi-1);
	quickSort(arr,pi+1,high);

	}
	// printf("%d\n",low);
	// printf("%d",high);
}