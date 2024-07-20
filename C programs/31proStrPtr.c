#include<stdio.h>

void printArr( char arr[]);
int main(){
	// char fname[] = "Ajeet";
	// char lname[] = "Rathour";
	// printArr(fname);
	// printArr(lname);
    // str();
	char fname[20];
	scanf("%s", fname);
	printf("%s\n", fname);
	return 0;
}
void printArr( char arr[]){
	int count =0;
	for(int  i = 0; arr[i] != '\0' ; i++){
		printf("%c", arr[i]);
		count++;
	}
	printf("\ncount : %d", count);
	printf("\n");
}
void str(){
	char name[] = "AJEET KUMAR JI";
	char n[] = {'A','B','\0'};
	printf("%s\n" , name);
	printf("%s\n" , n);
	
}
