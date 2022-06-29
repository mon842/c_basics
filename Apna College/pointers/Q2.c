#include<stdio.h>

int main(){
    int age=20;
    int *ptr=&age;
    int **pptr=&ptr;
    // printf("%d\n",&age);
    // int *d;
    // d=*pptr;
    printf("%d\n",**pptr);

    return 0;
}