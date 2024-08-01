#include<iostream>

using namespace std;
int main(){
	int arr[] = {3,33};
	    int min = arr[0];
		int max = arr[0];
	for(int i = 0; i< sizeof(arr)/sizeof(arr[0]);i++){
		if(i!=0&&sizeof(arr)/sizeof(arr[0])>0){
			if(arr[i]>max){
				max = arr[i];
				
			}
			if(arr[i]<min){
				min = arr[i];
			}
		}
	}
	cout<<max<<endl;
	cout<<min<<endl;
	return 0;
}