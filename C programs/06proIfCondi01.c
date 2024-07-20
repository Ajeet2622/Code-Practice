#include <stdio.h>
int main(){
	int a,b;
	printf("Enter Two Numbers : ");
	scanf("%d%d", &a, &b);
	if(a>=b){
		printf("%d is greater then Equal %d", a, b);
	}
	if(a<=b){
		printf("\n%d is less then equal %d",a ,b);

	}
	if(a<b){
		printf("\n%d is less then %d", a, b);
	}
	if(a>b){
		printf("\n%d is greater then %d", a, b);
	}
	if(a!=b){
		printf("\n%d is not equal to %d", a, b);
	}

	return 0;
}