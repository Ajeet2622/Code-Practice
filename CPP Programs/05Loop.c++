#include<iostream>
using namespace std;
int sum(int n);
void whileLoop();
void doWhile();
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	// int p =5;
	// int t = sum(p);
	// cout<<t<<endl;
	// whileLoop();
	// cout<<"hihi";
	doWhile();
	return 0;
} 
int sum(int n){
	//int musum;
	if(n <=0){
		return 0;
	}
return n+sum(n-1);
}
void whileLoop(){
	int sum = 0 ;
	while (true)
	{
		int input;
		
		cin>>input;
		if(input<0){
			cout<<"you input is a negative number:"<<input<<endl;
			cout<<"Total input SUM = "<<sum<<endl;
			return;
		}else
		{
			sum +=input;
		}
	}
	
}
void doWhile(){
	
	int n;
	
	do{
		cin>>n;
		cout<<n<<endl;
		//n++;
	}while(n>0);//while(n>0 && n<1000);
}