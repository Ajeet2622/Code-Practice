#include<stdio.h>


void sliceFun(char *myName , int n ,int m , int len);

int main(){
	int n=4 ,m=23;
	//scanf("%d%d",&n,&m);
	char name[] ="ajeetKUmarRathour";
	//scanf("%s" , name);
	int len = sizeof(name)/sizeof(name[0]);
	sliceFun(name , n , m ,len);

	return 0 ;
}

void sliceFun(char *myName , int n ,int m , int len){
	char slice[35];
	//int len = sizeof(*myName)/sizeof(*myName[0]);
	//printf("%d",sizeof(*myName));
	 int j = 0 ;
	for(int  i = n; i <= m && i<len ; i++ , j++){
		slice[j] = myName[i];
		printf("%c\n",slice[j]);
	}
	slice[j] = '\n';
	printf("%s",slice);
}