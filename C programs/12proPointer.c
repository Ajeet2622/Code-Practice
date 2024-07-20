#include <stdio.h>
int main(){
	int age = 20;
	int* ptr = &age;
	int p = *ptr;
	printf("%d", ptr);

	return 0;
}