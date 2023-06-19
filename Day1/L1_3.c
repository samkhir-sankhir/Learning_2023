#include<stdio.h>
#include<string.h>
int main()
{
	int rollno, phy, math, chem, total;
	float per;
	char name[50];
	printf("Enter the Roll number of the student:");
	scanf("%d", &rollno);
	printf("Enter the name of student:");
	scanf("%s", name);
	printf("Enter the marks of Physics, math and Chemistry :");
	scanf("%d %d %d", &phy, &math, &chem);
	total = phy + math + chem;
	per = total/3.0;
	
	printf("\nRoll No: %d\nName of Student : %s\n", rollno, name);
	printf("Marks in Physics : %d\nMarks in Maths : %d\nMarks in chemistry : %d\n", phy, math, chem);
	printf("Total Marks = %d\nPercentage = %5.2f\n", total, per);
}

