#include<iostream>
using namespace std;

struct Pair{
	int min;
	int max;

};

Pair getMinMax(int arr[], int n){
	struct Pair p1;
	int i;
	if(n == 1){
		p1.max = arr[0];
		p1.min = arr[0];
	}
	if(arr[0]>arr[1]){
		p1.min = arr[i];
		p1.max = arr[0];
	}else{
		p1.max = arr[1];
		p1.min = arr[0];
	}
	for(int i = 2; i<n;i++){
		if(arr[i]>p1.max)
		p1.max = arr[i];
		else if(arr[i]<p1.min)
		p1.min = arr[i];

	}
	return p1;

}

int main(){
	int arr[] = {1,567,23,346,23654,64,0,-652,456};
	struct Pair minmax = getMinMax(arr,sizeof(arr)/sizeof(arr[0]));
	cout<<"min : "<<minmax.min<<endl;
	cout<<"max : "<<minmax.max;
	return 0;
}