#include<stdio.h>
#include <stdbool.h>
int main(){
	int a = 23;
	int mul ;
	int i = 1, tbls = 36;
	while(i<=10){
		/*
		sum = a*i;
		printf("%d ",sum);
		a++;
		sum = a*i;
		printf("  %d  ",sum);
		a++;
		sum = a*i;
		printf("   %d  ",sum);
		a-=2;
		i++;
		printf("\n");*/
		int j = 1;
		while(j<tbls+1){
			mul = i*j ;
			if(i<3 && j<2){ 
				printf("    %d",mul);
			}
			
			else{
				printf("   %d",mul);
			}
			/*if(i==1&&6<=j<=tbls){
				printf("  %d",mul);
			}*/
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}