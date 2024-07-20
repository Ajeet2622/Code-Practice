#include<stdio.h>
#include<string.h>
struct studentInfo
{
	int roll;
	char name[100];
	float cgpa;
	double mob;
	/* data */
};
int main(){
	struct studentInfo stu[200];

	//student first
	stu[0].roll = 12345;
	strcpy(stu[0].name, "ajeet");
	stu[0].cgpa =8.2;
	stu[0].mob =8967452389;

	//student first
	stu[1].roll = 12346;
	strcpy(stu[1].name, "Manju");
	stu[1].cgpa = 9.8;
	stu[1].mob =8677456389;

	//student first
	stu[2].roll = 12347;
	strcpy(stu[2].name, "Harshita Gahlot");
	stu[2].cgpa =9.2;
	stu[2].mob =8123452346;


//student first
	stu[3].roll = 12348;
	strcpy(stu[3].name, "Avnish");
	stu[3].cgpa =9.9;
	stu[3].mob =9467471629;

	//student first
	stu[4].roll = 12349;
	strcpy(stu[4].name, "Bhawana");
	stu[4].cgpa =9.6;
	stu[4].mob =8123452989;
	//printf(stu[0]);
	printf("%d" , stu[4].roll);

	return 0;
}
