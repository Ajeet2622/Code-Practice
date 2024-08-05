#include<iostream>
using namespace std ;
int main(){
	int n;
	cin>>n;
	int arr[n+1];
	arr[n] = -1;
	for(int i = 0; i<n ; i++){
		cin>>arr[i];
	}

	int mx = -1;
	int j = 0;
	int ans = 0;
	
	if(n ==1){
		cout<<n;
		return 0;
	}

	while (j<n)
	{
		if(arr[j]>mx && arr[j]>arr[j+1]){
			mx = arr[j];
			ans++;

		}
		j++;
	}
	cout<<ans;
	


	return 0;
}