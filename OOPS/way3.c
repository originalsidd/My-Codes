#include <stdio.h>

int add(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a+b;
    return c;
}

int main(){
    int c;
    c=add();
    printf("%d",c);
    return 1;
}
