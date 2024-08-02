 #include<iostream>
 using namespace std;

 void selesort(int arr[],int n){
	for(int i = 0 ; i<n-1; i++){
		for(int j = i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<endl;
	}
 }
 int main(){
	int arr[] = {3,5,1,7,8,6,4,1,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	selesort(arr,n);
	return 0;
 }