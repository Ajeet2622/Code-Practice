#include <stdio.h>

void swap(int k, int y);
int _swap(int *j,int *k);
int main() {
    int x = 90;
    int y = 78;
    printf("Before swap: x = %d, y = %d\n", x, y);
	
    swap(x, y);
	_swap(&x, &y); 
	printf("after swap: x = %d, y = %d\n", x, y);
	printf("%d",x);
    return 0;
}
//call by value
void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
	printf("After swap 3434: x = %d, y = %d\n", a, b);
    //return 0;
}
//call by reference
int _swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t; 
	return 0;
}