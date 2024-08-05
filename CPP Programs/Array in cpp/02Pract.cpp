#include<iostream>
#include<math.h>
#include<limits>
using namespace std;
int main(){
	int arr[] = {1,2,0,7,2};
	int size = sizeof(arr)/sizeof(arr[0]);

	int maxn = INT64_MIN; 
	for(int i=0; i<size; i++){
		int sum = 0;
		// for(int j = i; i<=j && j<size ; j++){
		// 	cout<<arr[j]<<" ";
		// }
		// cout<<endl;
		// int ptemp = sum;
		//int temp = sum;
		for(int j = i; j < size; j++){
			sum+=arr[j];
			//maxn = max(maxn , sum);
			// cout<<sum<<endl;
		}
			cout<<sum<<endl;
		
		// if(temp<sum){
		// 	for(int j = i; i<=j && j<size; j++){
		// 		cout<<arr[j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
	}
	//cout<<maxn<<endl;
	return 0 ;
}