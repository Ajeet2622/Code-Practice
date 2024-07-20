#include<stdio.h>
#include <string.h>

struct studentBluePrint{
	int roll;
	char name[30];
	float marks[5];
};
int main(){
	struct studentBluePrint s1;
	s1.roll = 12345;
	strcpy(s1.name , "Ajeet Kumar");
	s1.marks[0] = 78;
	s1.marks[1] = 36;s1.marks[2] =89;
	s1.marks[3] = 90;
	s1.marks[4] = 89;
	// strcpy(s1.marks[0] , 78);
	// strcpy(s1.marks[1] , 36);
	printf("Roll: %d\n", s1.roll);
	puts(s1.name);
	for(int i = 0 ; i < 5 ; i++){
		printf("%.2f\n",s1.marks[i]);
	}
	return 0;
}