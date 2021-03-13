#include <stdio.h>

struct student{
	char name[20];
  	int sub[5];
};

void grade(struct student s,char *g){
	
	int i,total=0;
	for(i=0;i<5;i++)
	{
		total+=s.sub[i];
	}
	float avg=total/5.0;
	
	if (avg>80)
		*g='A';
	else if (avg>60)
		*g='B';
	else if (avg>40)
		*g='C';
	else
		*g='D';
}

int main() {
	struct student s;
	int i;
	char g;
	printf("Enter name: ");
	scanf("%[^\n]",s.name);
	printf("Enter 5 subjects: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&s.sub[i]);
		
	}
	grade(s,&g);
	printf("\nStudent Name: %s\nGrade: %c",s.name,g);
	return 1;
}

