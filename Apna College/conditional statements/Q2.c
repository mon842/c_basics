#include<stdio.h>
// checking if the char is Uppercase or not
int main(){
    char a;
    printf("enter the char\n");
    scanf("%c",&a);
    if (a>='A' && a<='Z')
    {
        printf("%c is in uppercase",(char)a);
    }
    else if (a>='a' && a<='z')
    {
        printf("%c is in lowercase",(char)a);
    }
    else
    {
        printf("%c is not in upper or lower case",(char)a);
    }
    
    return 0;
}