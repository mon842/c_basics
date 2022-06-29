// Write a program to interchange the contents of two locations (variables), where the values of those locations are input from user.

#include<stdio.h>

int swap(int x,int y);
int _swap(int *x,int *y);

int main(){
    int l,b;
    printf("enter the 1st and 2nd\n");
    scanf("%d%d",&l,&b);
    swap(l,b);
    _swap(&l,&b);
    printf("l= %d and b=%d \n",l,b);
    return 0;
}

int swap(int x,int y){
    int t=x;
    x=y;
    y=t;
    printf("x= %d and y=%d \n",x,y);

}

int _swap(int *x,int *y){
    int t=*x;
    *x=*y;
    *y=t;
    printf("x= %d and y=%d \n",*x,*y);
}