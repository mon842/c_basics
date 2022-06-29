#include<stdio.h>

int main(){
    int a[5];
    int *ptr=&a[0];

    for (int i = 0; i < 5; i++)
    {
        printf("enter the value\n");
        scanf("%d",ptr+i);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",*(ptr+i));
    }
    
    return 0;
}