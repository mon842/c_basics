#include<stdio.h>

int reve(int *a[],int *rev);

int main(){
    int a[]={2,3,5,3,9};
    int rev;

    reve(&a,&rev);
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ",rev[i]);
    // }
    

    return 0;
}

int reve(int *a[],int *rev[]){
    int r;
    for (int i = 0; i < 5; i++)
    {
        printf("%d",*a[i]);
    }
    
}