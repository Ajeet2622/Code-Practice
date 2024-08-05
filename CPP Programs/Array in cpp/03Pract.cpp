#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];

	for(int i=0 ; i<n ;i++){
		cin>>arr[i];
	}

	int pd = arr[1] - arr[0];
	int ans = 2; //array two elements
	int curr = 2; // it will change in while loop
	int j = 2;//incrementor
	while (j<n)
	{
		if(pd == arr[j]-arr[j-1]){
			curr++;
		}else{
			pd = arr[j]-arr[j-1];
			curr=2;
		}
		ans = max(ans , curr);
		j++;
	}
	cout<<ans<<endl;


	return 0;
}