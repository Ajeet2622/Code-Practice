#include<iostream>
#include<climits>

using namespace std;
 

void maxMinNumber(int arr[],int n){
	int max = INT_MIN;
	int min = INT_MAX;

	for(int i = 0; i < n ;i++){
		if(max<arr[i]){
			max = arr[i];
			///cout<<max<<endl;
		}
		if(min>arr[i]){
			min = arr[i];
		}
	}
	cout<<max<<endl;
	cout<<min<<endl;
}

int main(){
	int arr[10] = {2,5,1,4,0,6,5,0,-245434,-1};
	maxMinNumber(arr ,10);
	return 0;
}