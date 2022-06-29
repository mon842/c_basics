/*
char str[]=['d','d','e','e']; denotes it has characters d d e e

char str[]=['d','d','e','e','\0']; denotes it has a string "ddee"

char str[]="ddee'""; denotes it has a string "ddee"
/0 null character denotes string termination
*/ 

#include<stdio.h>

void print(char s[]);

int main(){
    char s[]="Sayak";
    char n[50];
    scanf("%s",&n);

    // print(s);
    return 0;
}

void print(char s[]){
    int i=0;
    printf("%c",s[i]);
    while (s[i]!='\0')
    {
        printf("%c",s[i]);
        i++;
    }
}
//  scanf() cannot take input of strings ,,, it take only one string 