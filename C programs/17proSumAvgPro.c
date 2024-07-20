#include<stdio.h>
void work(int a, int b, int *sum, int *avg, int *pro);
int main(){
	int a = 9;
	int b = 7;
	int sum, pro, avg;
	work(a, b, &sum, &avg, &pro);
	printf("sum = %d ,pro = %d avg = %d\n", sum, pro, avg);
	//printf("sum = %d ,pro = %d avg = %d\n", &sum, &pro, &avg);

	return 0;
}
void work(int a, int b, int *sum, int *avg, int *pro){
	 *sum = a+b;
	 *avg = (a+b)/2;
	 *pro = a*b;
	printf("sum = %d ,pro = %d avg = %d\n", *sum, *pro, *avg);
	
}