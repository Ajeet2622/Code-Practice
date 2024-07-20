#include<stdio.h>
#include <string.h>

int main(){
	char pwd[100];
	scanf("%s",pwd);
	stalting(pwd);

	return 0;
}
 void stalting(char password[]){
	char salt[] = "123";
	char newpwd[200];
	strcpy(newpwd , password); 
	strcat(newpwd , salt);
	printf("%s\n",newpwd);

 }