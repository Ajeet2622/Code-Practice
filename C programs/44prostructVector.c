#include <stdio.h>

typedef struct vetor
{
	int x;
	int y;
	/* data */
} v;
int main(){
	v v1 ={2 ,3};
	v v2 = {5,7};
	v sum = {0};
	v *ptr = &sum;
	vSum(v1, v2, ptr);
	printf("sum : %di+%dj",sum.x,sum.y);
	return 0;
}
void vSum(v v1,v v2, v *sum){
	(*sum).x = v1.x + v2.x;
	(*sum).y = v1.y + v2.y;
}
