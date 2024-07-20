#include<stdio.h>

typedef struct MyClassStudentInformation
{
	char name[45];
	int roll;
	/* data */
}mcsi;
int main(){
	struct MyClassStudentInformation s1 = {"AJEET" ,567676};
	mcsi s2 = { "Harshita",234432};
	printf("%s\n", s1.name);
	printf("%s\n", s2.name);

	return 0;
}
