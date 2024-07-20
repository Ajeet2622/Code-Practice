#include<stdio.h>

struct student
{
	char name[100];
	int roll;
	float cgpa;	/* data */
};
int main(){
	struct student s1 = {"ajeet" , 10002 , 7.8};
	struct student s2 = { "manju gamgwar" , 10003 , 8.2};
	struct student s3 = {"Harshita" , 10004 , 9.4};
	struct student s4 = { "Anjali", 10005 , 9.5};
	struct student s5 = {"Rajat", 10006 , 9.9};
	struct student s6 = {0};// zero fo all
	return 0;
}
