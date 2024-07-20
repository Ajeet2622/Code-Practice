#include<stdio.h>
int var(int k);
int _var(int* k);

int main(){
	int a = 89;
	printf("address of a in main : %u\n",&a);
	var(a);
	_var(&a);
	return 0;
}
int var(int n){
	printf("address of a in var fun : %d\n",&n);
	return 0;
}
int _var(int* p){
	printf("address of a in _var fun : %d\n",p);
	return 0;
}