#include<stdio.h>
int main (){
	//int arr[] = {2,3,1,67,3,8,2,9,11,5};
	int arr[] = {9,3,-13,8,12,2,16,17,43};
	int size = sizeof(arr)/sizeof(arr[0]);
	mergeSort(arr,0,size-1);
	printarr(arr,size);
	return 0;
}


int mergeSort(int arr[] ,int st,int ed){
	if(st<ed){
	int q = (st+ed)/2;
	//printf("hihi");
	mergeSort(arr,st,q);
	mergeSort(arr,q+1,ed);
	merge(arr,st,q,ed);
	

	}
	return 0;
}
void printarr(int *arr,int size){
	for(int i=0 ; i<size; i++){
		printf("%d ",arr[i]);
	}
}

int merge(int arr[], int st, int q, int ed){
	int n1 = q-st+1;
	int n2 =ed-q;

	int left[n1],right[n2];

	for(int i=0; i<n1; i++){
		left[i]=arr[st+i];
		// printf("%d ",st+i);
	}
	// printf("\n");
	// printf("--------g-----------");
	// printarr(left,n1);
	// printf("\n");
	//printarr(left,n1);

	for(int i=0; i<n2 ; i++){
		right[i]=arr[q+1+i];
		// printf("%d ",q+1+i);
	}
	// printf("\n");

	// printarr(right,n2);
	// printf("\n");
	int i=0,j=0,k=st;
	while(i<n1&&j<n2){
		if(left[i]<=right[j]){
			arr[k] = left[i];
			i++;
		}else{
			arr[k]=right[j];
			j++;
		}
		k++;
	}

	while(i<n1){
		arr[k]=left[i];
		i++;
		k++;
	}
	while (j<n2)		
	{
		arr[k]=right[j];
		j++;
		k++;
	}
	

	return 0;
}