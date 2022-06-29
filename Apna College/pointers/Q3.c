#include<stdio.h>

int printAddress(int n);
int print_Address(int *n);

int main(){
    
    int a=2;
    printf("%p\n",&a);
    printAddress(a);
    print_Address(&a);

    return 0;
}

int printAddress(int n){
    printf("%p\n",&n);
}

int print_Address(int *n){
    printf("%p\n",n);
}