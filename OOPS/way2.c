#include <stdio.h>

void add(int a, int b){
    int c;
    c=a+b;
    printf("%d",c);
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    add(a,b);
    return 1;
}
