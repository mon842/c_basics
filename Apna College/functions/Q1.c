#include<stdio.h>

void greet(char ch);



int main(){
    char ch;
    printf("Enter your originality F=french I= India\n");
    scanf("%c",&ch);
    greet(ch);
    return 0;
}

void greet(char ch){
    if (ch=='F')
    {
        printf("Bonjour");
    }
    else if (ch=='I')
    {
        printf("Indian");
    }
    else
    {
        printf("Fuck u Alien");
    }
}