#include<stdio.h>
int main(){
	char str[]  = "Mrudula Tripathi";
	printf("%s\n" , str);
	// not allowed str[]  = "ghdsfjkgh fgfsd";
	char *My_Str = "Mukesh Maharaj";
	printf("%s\n", My_Str);

	//re_initializatio is allowed
	My_Str = "Lerry pikc point";
	printf("%s\n", My_Str);

	//see me
	My_Str = str;
	printf("%s\n", My_Str);
	//
	char *gh = str;
	printf("%s\n" , gh);
	return 0;
}
