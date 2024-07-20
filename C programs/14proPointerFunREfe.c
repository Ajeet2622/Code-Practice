#include<stdio.h>


int square(int n);
int _square(int* n);

int main(){
	int num = 5;
	square(num);
	printf("\n%d",num);
	_square(&num);
	printf("\n%d",num);


	return 0;
}
//call by value
int square(int n){
	n = n * n;
	printf("\n%d",n);

	return 0;
}
//call by reference
int _square(int* n){
	*n = (*n) * (*n);
	printf("\n%d", *n);
	return 0;
}