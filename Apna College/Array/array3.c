#include<stdio.h>

int main(){
    int aadhar[4];
    int *ptr=aadhar;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",ptr++);
        printf("%d \n",ptr);
    }
    ptr=ptr-4;
    for (int i = 0; i < 4; i++)
    {
        printf("%d %d\n",aadhar[i],*ptr++);
    }
    return 0;
}



//Array is a pointer

/* int *ptr=arr;

int *ptr=&arr[0];
*/



/*
Array as function argument

function declaration

void pn(int arr[],int n)
        or
void pn(int *arr,int n)

call function
pn(arr,n);
*/ 