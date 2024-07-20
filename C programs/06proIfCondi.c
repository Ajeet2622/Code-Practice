#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the 1st number : ");
	scanf("%d",&a);
	printf("Enter the 2nd number : ");
	scanf("%d",&b);
	if(b>a){
		printf("This %d number is greate then %d.",b,a);
	}
	else if (a>b) {
		printf("%d is greater then %d",a,b);
	}
	else{
		printf("Equal Numbers");
	}
	return 0;
}