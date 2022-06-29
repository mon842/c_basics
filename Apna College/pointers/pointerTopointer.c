// int **pptr
// char **pptr
// float **pptr

#include<stdio.h>

int main(){
    int age=20;
    int *ptr=&age;
    int **pptr=&(ptr);

    return 0;
}