#include<stdio.h>
int main(){
	int in[100];
	//GPUse();
	fgets(in , 100 , stdin);
	puts(in);
	return 0;
}
void GPUse(){
	int in[100];
	gets(in);
	puts(in);
}