#include<stdio.h>
#include<ctype.h>

int main(){
    char c;
    printf("enter the digit to check");
    scanf("%c",&c);
    if(isdigit(c)){
        printf("%c is a digit",c);
    }else{
        printf("%c is not a digit",c);
    }
    return 0;
}