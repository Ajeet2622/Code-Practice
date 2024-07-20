#include<iostream>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" ,stdin);
	freopen("output.txt" , "w" ,stdout);
	#endif
	float cgpa;
	cin>>cgpa;
	if(cgpa<7.8){
		cout<<"i will not give party."<<endl;
		if(cgpa<7){
			cout<<"i am sure not give any party.";
		}
		else{
			cout<<"only Samosa party only.";

		}
	}
	else if(cgpa<10){
		cout<<"Pizza party Only.";
	}
	else if (cgpa==10){
		cout<<"I will give a large party in a restaurent.";
	}
	else{
		cout<<"not found!";
	}
	return 0;
}