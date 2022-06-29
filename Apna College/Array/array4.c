#include<stdio.h>


int print(int *ptr,int n);


int main(){

    int arr[4]={4,5,8,9};
    print(arr,4);
    return 0;
}

int print(int *ptr,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",*(ptr+i));
    }
    
}