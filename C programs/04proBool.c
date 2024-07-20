#include <stdio.h>
#include <stdbool.h>

int main(){

	//boolean is not a in build data type in c programing
	
	bool a = false;
	//printf("%d",a);

	int t = printf("\n%d",5>63);
	printf("\n%d", t);
	if(t==1){
		printf("True");
	}
	else if (t==0){
		printf("Flase");
	}
	return 0;
}