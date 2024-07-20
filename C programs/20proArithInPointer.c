#include<stdio.h>

void sub_pointer();

int main(){
	int age =20;
	printf("Age : %d",age);
	int* ptr = &age;
	//printf("\nAddress of pointer : %p",ptr);
	printf("\nAddress of pointer : %u",ptr);
	ptr++;
	//printf("\nAddress inc : %p\n",ptr);
	printf("\nAddress inc : %u\n",ptr);
	charAdd();
	sub_pointer();

	return 0;
}
int charAdd(){
	char ch = 'z',ch1 = 'T';
	char ptr = &ch;
	char ptr1 = &ch1;

	printf("Address : %d\n",ptr);
	ptr++;
	printf("Address inc : %d\n",ptr);
	printf("Address : %d\n",ptr1);
	ptr1++;
	printf("Address inc : %d\n",ptr1);

	return 0;
}
void sub_pointer(){
	int age = 20;
	int _age = 25;
	int *ptr = &age;
	int *_ptr = &_age;
	printf("-------------ggg--------------\n");
	/*
	int sum = printf("%d\n",ptr);
	printf("%d\n",sum);
	int sum1 = printf("%d\n",ptr1);
	printf("%d\n",sum1);
	sum = sum + sum1;*/
	//diffrence in ptr
	printf("\nAdd pio nnnter: %d\n" , (ptr - _ptr) );
	//printf("\nAdd pio nnnter: %d\n" , (ptr -_ptr) );

	//comparision in ptr;
	_ptr = &age;
	printf("comparison : %d\n", ptr ==_ptr);
}