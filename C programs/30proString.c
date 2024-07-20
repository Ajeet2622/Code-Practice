#include<stdio.h>
int main(){
	
	char name[] = "ajeetvvxv";
	char name1[] =" Rathour ji\0";
	char _name[] = {'A','J','E','E','T'};
	


	printf("char name: %s\n", name);
	printf("char_name: %s\n", _name);
printf("char name: %s\n", name1);
	//pointer here
	char *aname = &name;
	char *_name1 = &name1;
	char *_aname = &_name;
	printf("1 %u\n" ,aname);
	printf("2 %u\n" ,_name1);
	printf("3 %u\n" ,_aname);
	// size of
	printf("%d\n" , sizeof(name));
	printf("%d\n" , sizeof(name1));
	printf("%d" , sizeof(_name));

	
	return 0;
}