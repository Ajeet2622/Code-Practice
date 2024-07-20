#include <stdio.h>
#include <string.h>


struct studentData
{
	int roll;
	char name[100];
	int marks[5];
	/* data */
};

void prntloop(int marks[]);

int main(){
	struct  studentData s1 , s2 , s3 ;
	
	//char Name[100] = "AJEEET KUMAR RATHOUR";
	//char ch;

	// int i = 0;

	// for(i = 0 ; Name[i] != '\n' ; i++){
	// 	s1.name[i] = Name[i]; 
	// }
	// s1.name[i] = '\n';
	// puts(s1.name);

	//student first
	s1.roll = 12345;
	strcpy(s1.name , "AJEET");
	s1.marks[0] = 45;
	s1.marks[1] = 78;
	s1.marks[2] = 70;
	s1.marks[3] = 84;
	s1.marks[4] = 77;
	printf("%d\n",s1.roll);
	printf("%s\n" ,s1.name);
	prntloop(s1.marks);
	// for(int i=0 ;i<5;i++){
	// 	printf("%d" ,s1.marks[i]);
	// }

	//student second
	s2.roll = 12356;
	strcpy(s2.name ,"MANJU");
	s2.marks[0] = 89;
	s2.marks[1] =60;
	s2.marks[2] = 89;
	s2.marks[3] = 83;
	s2.marks[4] = 90;
	printf("%d\n",s2.roll);
	printf("%s\n" ,s2.name);
	prntloop(s2.marks);
	
	//student third
	s3.roll = 12378;
	strcpy(s3.name , "Harshita gahlot");
	s3.marks[0] = 79;
	s3.marks[1] = 69;
	s3.marks[2] = 89;
	s3.marks[3] = 90;
	s3.marks[4] = 79;
	printf("%d\n",s3.roll);
	printf("%s\n" ,s3.name);
	prntloop( s3.marks);
	return 0;
}

void prntloop(int marks[]){
	for(int i=0 ; i < 5; i++){
		printf("%d\n",marks[i]);
	}
	printf("\n");
}