#include <stdio.h>

int add(int a, int b){
    int c;
    c=a+b;
    return c;
}

int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=add(a,b);
    printf("%d",c);
    return 1;
}
