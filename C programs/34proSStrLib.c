#include<stdio.h>
#include"string.h"

int main(){
	//string length
	char atr[] = "Ankita gupta";
	int len = strlen(atr);
	printf("lenght: %d\n" , len);

	// string change or copy
	char str1[100] = "Manju";
	char str2[20] =" Siddhartha";
	//strcpy(str2 , str1);
	//puts(str2);

	//string concatenation
	strcat(str1 ,str2);
	puts(str1);
	// compariiosn
	char a[] = "AAAA";
	char b[] = "AAAD";
	printf("%d\n" , strcmp(a,b));
	return 0;
}