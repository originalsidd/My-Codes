#include <stdio.h>
#include <stdlib.h>

struct Employee{
    int eID;
    char eName[25];
    float eSal;
};

int main(){
    struct Employee *e;
    e=(struct Employee*)malloc(sizeof(struct Employee));
    scanf("%d", &e->eID);
    scanf("%s", e->eName);
    scanf("%f", &e->eSal);
    printf("The Details are: ");
    printf("\n%d", e->eID);
    printf("\n%s", e->eName);
    printf("\n%f",e->eSal);
    return 0;
}
