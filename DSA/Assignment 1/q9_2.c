//without using pointer
#include <stdio.h>

struct student{
	char name[20];
  	int sub[5];
  	char grade;
};

int main() {
	struct student s;
	int i,total=0;
	printf("Enter name: ");
	scanf("%[^\n]",s.name);
	printf("Enter 5 subjects: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&s.sub[i]);
		total+=s.sub[i];
	}
	float avg=total/5.0;

	if (avg>80)
		s.grade='A';
	else if (avg>60)
		s.grade='B';
	else if (avg>40)
		s.grade='C';
	else
		s.grade='D';

	printf("\nStudent Name: %s\nGrade: %c",s.name,s.grade);
	return 0;
}
