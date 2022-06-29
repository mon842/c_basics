#include<stdio.h>

int main(){
    int age=20;
    int *ptr=&age; 

    printf("%d\n",*(&age));
    printf("%d\n",age);
    printf("%p\n",&age);
    printf("%u\n",&age);
    printf("%d\n",*ptr);
    printf("%d\n",ptr);
    return 0;
}