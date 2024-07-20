#include<iostream>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n=0;
	while (true)
	{
		if (!(cin>>n)){
			break;
		}
		if(n<0){
			continue;
		}
		
		cout<<n<<endl;
	}
	
	return 0;
}