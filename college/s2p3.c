#include<stdio.h>
#include<ctype.h>

int main(){
    int var1='1';
    if (isdigit(var1))
    {
        printf("is a digit\n");
    }
    else
    {
        printf("is not a digit\n");
    }
    
    return 0;
}