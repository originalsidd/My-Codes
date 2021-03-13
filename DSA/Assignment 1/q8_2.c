#include <stdio.h>

struct book{
  int bookno;
  char name[30];
  char author[20];
  float price;
  int year;
};

int main() {
	struct book b;
	int i,n;
	printf("Enter number of entries: ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
	
		printf("\nEnter book no.: ");
		scanf("%d",&b.bookno);
		printf("Enter book name: ");
		scanf("\n");
		scanf("%[^\n]",b.name);
		printf("Enter book author: ");
		scanf("\n");
		scanf("%[^\n]",b.author);
		printf("Enter year of publishing: ");
		scanf("%d",&b.year);
		printf("Enter price: ");
		scanf("%f",&b.price);
		
		if (b.year<2000)
			b.price=b.price/2;
		printf("\nBook Info:\n%d - %s (by %s) costs %f\n",b.bookno,b.name,b.author,b.price);
	}
	return 1;
}

