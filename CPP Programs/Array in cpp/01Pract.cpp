#include<iostream>
using namespace std;

int buyChoco(int rup,int choco);
int eatChoco(int choco);


int main(){
	int rup = 15;
	int choco = 0;
	int chocolate = buyChoco(rup , choco);
	

	return 0;
}
int buyChoco(int rup,int choco){
	
	for(int i = 1 ; i <= rup ; i++){
		choco++;
	}
	//cout<<"hihi";
	//cout<<choco;
	int wrapper = eatChoco(choco);
	//cout<<"wrap: "<<wrapper<<endl;
	//for(int i = 1 ; wrapper/3 ; i++){
		int extraWrapper = wrapper%3;
		int tempWrap = wrapper - extraWrapper ;
		int tempChoco = tempWrap/3;
		choco+=tempChoco;
		tempWrap = tempWrap + eatChoco(tempChoco);
//////not completed please compelete it

	//}
	return choco;

}
int eatChoco(int choco){
	int wrapper = 0;
	for(int i = choco; i > 0 ; i-- ){
		wrapper++;
	}
	return wrapper;
}