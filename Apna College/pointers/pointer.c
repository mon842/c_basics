#include<stdio.h>


// "*"--- value at address
// "&"---Address of value

int main(){
    int num=22;
    int *add=&num;
    int _num=*add;
    printf("%d",_num);
    return 0;
}
// int *ptr
// float *ptr
// char *ptr