//stack_infix_to_postfix

#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1;

void push(char x){
    stack[++top] = x;
}

char pop(){
    if(top == -1)
        return -1;
    else
        return stack[top--];
}


int main(){
    char exp[100];
    char *e, x, y;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
    e = exp;

    while(*e != '\0'){
        if(isalnum(*e))
            push(*e);
        else{
            x=pop();
            y=pop();
            switch(*e){
                case '+':push(x+y);
                    break;
                case '-':push(y-x);
                    break;
                case '*':push(x*y);
                    break;
                case '/':push(y/x);
                    break;
            }
        }
        e++;
    }

    printf("%c ",pop());

    return 0;
}
