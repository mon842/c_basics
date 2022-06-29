#include<stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main(){
    int x=3;int y=9;
    swap(x,y);
    printf("the value of x=%d and value of y=%d",x,y);
    _swap(&x,&y);
    printf("the value of x=%d and value of y=%d",x,y);
    return 0;
}

void swap(int a, int b){
    int t=a;
    a=b;
    b=t;
}
void _swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}