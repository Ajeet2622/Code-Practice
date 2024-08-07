#include<stdio.h>
#include<string.h>
#include<accctrl.h>
struct student{
	char name[20];
	int roll;
	float cgpa;
	int mobile;
};
int main(){
	struct student s1;
	//s1.name = 'j';
	strcpy(s1.name , "Shiddharth");
	s1.roll = 1001;
	s1.cgpa =9.8;
	s1.mobile =897797966;
	printf("Name is : %s",s1.name);
	printf("Roll Number : %d", s1.roll);
	printf("CGPA is : %.1f",s1.cgpa);
	printf("Mobile Number : %d",s1.mobile);

	struct student s2;
	strcpy(s2.name,"Shishi");
	s2.roll = 1002;
	s2.cgpa = 8.7;
	s2.mobile = 8765765778;
	printf("Name is :%s",s2.name);
	printf("Roll number : %d",s2.roll);


	return 0;
}