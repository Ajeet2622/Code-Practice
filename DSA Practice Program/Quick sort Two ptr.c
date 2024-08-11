#include<stdio.h>
#include<limits.h>


void quickSort(int arr[],int low,int high);
void swap(int*a,int *b);
void printArr(int arr[], int size);
int partition(int arr[], int low ,int high);

int main(){
	int arr[]={4,5,12,7,14,9,13};
	int size = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr,0,size-1);
	printArr(arr,size);
	return 0;
}
void swap(int*a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void printArr(int arr[], int size){
	for(int i = 0; i<size;i++){
		printf("%d ",arr[i]);
	}
}
int partition(int arr[], int low ,int high){
	// int mx = INT_MAX;
	// int pivot = arr[low];
	// int i=low,j=high-1;
	// for(int k = low;k<high-1;k++){
	// 	if(arr[i]>pivot&&arr[i]<mx){
	// 		i++;
	// 	}
	// 	if()
	// }
	// int pivot =arr[high-1];
	// int i =low;
	// for(int j = 0;j <high-1;j++){
	// 	for(int k = low+1;k<)
	// 	if(pivot<arr[j]){
	// 		i++;
	// 	}
	// }
	int pivot = arr[high];
	int left = low;
	int right = high-1;
	for(int i=low; i<=high;i++){
		// for(int j=low;j<high;j++){
		// 	if()
		// }

		if(left<right){
			if(arr[left]<=pivot){
			   left++;
		     }
		    if(arr[right]>pivot){
		    	right--;
		    }
		}
			if(right<left){
			break;
		}

		if(arr[right]<=pivot&&arr[left]>pivot){
			swap(&arr[left],&arr[right]);
		}
	}
	 swap(&arr[left], &arr[high]); // Swap pivot with the element at the left pointer
    return left; 
}

void quickSort(int arr[],int low,int high){
	if(low<high){
		int pi = partition(arr,low,high);
		quickSort(arr,low,pi-1);
		quickSort(arr,pi+1,high);
	}
}