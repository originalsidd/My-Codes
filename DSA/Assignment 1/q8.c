 #include <stdio.h>

struct book{
  int bookno;
  char name[30];
  char author[20];
};

int main() {
	struct book b;
	printf("Enter book no.: ");
	scanf("%d",&b.bookno);
	printf("Enter book name: ");
	scanf("\n");
	scanf("%[^\n]",b.name);
	printf("Enter book author: ");
	scanf("\n");
	scanf("%[^\n]",b.author);
	printf("\nBook Info:\n%d - %s (by %s)",b.bookno,b.name,b.author);
	return 1;
}

