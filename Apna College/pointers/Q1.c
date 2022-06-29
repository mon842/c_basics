#include<stdio.h>

int main(){
    int a=9;
    int b=10;
    printf("da value of a is %d and the value of b is %d \n",a,b);
    int temp=*(&a);//9
    a=*(&b);
    b=temp;
    printf("da value of a is %d and the value of b is %d \n",a,b);

    return 0;
}