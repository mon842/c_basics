// febonacci series of n series

#include <stdio.h>

int fib(int n);

int main(){
    int n;
    printf("enter the number for fibonacci\n");
    scanf("%d",&n);
    fib(n);
    return 0;
}

int fib(int n){
    int fibo=fib(n)+fib(n-1);
    int f=fibo+n;
    return f;
}

// #include<stdio.h>

// int main(){
//     return 0;
// }