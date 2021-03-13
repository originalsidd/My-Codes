/*WAP to display date of format dd-month_name-yyyy or dd/month_name_short/yyyy or mm/dd/yyyy in the final format dd/mm/yyyy*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

char** input(int *);
char** test(char[],int*);
char** split(char[]);
void output(char**,int*);
int mon(char[]);

int main(){
    int f;
    char **arr;
    arr=input(&f);
    output(arr,&f);
    return 1;
}

char** input(int *f){
    char date[20],**arr;
    printf("Enter date: ");
    scanf("%s",date);
    arr=test(date,f);
    return arr;
}

char** test(char date[],int* f){
    char **arr;
    for (int i=0;i<strlen(date);i++){
        if (date[i]=='-'){
            *f=1;
            break;
        }
        else if (date[i]=='/'){
            if ((date[i+1]>=97 && date[i]<=122) || (date[i+1]>=65 && date[i]<=90))
                *f=2;
            else
                *f=3;
            break;
        }
    }
    arr=split(date);

    return arr;
}

void output(char** arr,int *f){
    printf("\nIn dd/mm/yyyy format: ");
    if (*f==1 || *f==2){
        int mm;
        mm=mon(arr[1]);
        printf("%s/%d/%s\n",arr[0],mm,arr[2]);
    }
    else if (*f==3){
        printf("%s/%s/%s\n",arr[1],arr[0],arr[2]);
    }
}

int mon(char m[]){
    char months1[][10] = {"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};
    char months2[][10] = {"jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec"};
    int x,i;
    strlwr(m);

    if (strlen(m)==3){
        for (i=0;i<12;i++){
            if (strcmp(m,months2[i])==0)
                x=i;
        }
    }
    else{
        for (i=0;i<12;i++){
            if (strcmp(m,months1[i])==0)
                x=i;
        }
    }

    return x+1;
}


char** split(char date[]){
    char **arr;
    arr=(char**)calloc(3,sizeof(char*));
    for (int i=0;i<3;i++){
        *(arr+i)=(char*)calloc(12,sizeof(char));
    }
    int j=0,k=0;
    for (int i=0;i<strlen(date);i++){
        if (date[i]=='/' || date[i]=='-'){
            j++;
            k=0;
            continue;
        }
        arr[j][k]=date[i];
        k++;
    }
    return arr;
}
