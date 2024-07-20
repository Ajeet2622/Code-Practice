#include<stdio.h>

struct student
{
	char name[100];
	int roll;
	float cgpa ;

	/* data */
}; 

void arrowPtr(struct student *Ptr);
void structVar(struct student ss1);
void ArrStruct(struct student arr[]);

int main(){
	struct student s1 = {"AJEET Manju", 123 , 8.4};
	//printf("%s\n" , s1.name);
	struct student *ptr = &s1;
	//printf("%c%d%f" , *ptr);
	arrowPtr(ptr);
	structVar(s1);
	struct student arr[10];
	ArrStruct(arr);

	return 0;
}
void arrowPtr(struct student *Ptr){
	printf("By dot  pointer : %s\n" ,(*Ptr).name );
	printf("By arrow pointer: %s" ,(Ptr)->name );

}
void structVar(struct student ss1){
	printf("\n%s\n" ,ss1.name);
}
void ArrStruct(struct student arr[]) {
    int num = 3;
    for (int i = 0; i < num; i++) {
        printf("Roll number of student %d: ", (i + 1));
        scanf("%d", &arr[i].roll);
        printf("Name of student %d: ", (i + 1));
        scanf("%s", &arr[i].name);
        printf("CGPA of student %d: ", (i + 1));
        scanf("%f", &arr[i].cgpa);
    }
    //printf("Roll number : %d",arr[0].roll);
}