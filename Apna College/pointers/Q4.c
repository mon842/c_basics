#include<stdio.h>

void maxe(int *a,int *b,int *max);

int main(){
    int a;
    int b;
    scanf("%d%d",&a,&b);
    int max;

    maxe(&a,&b,&max);
    printf("%d",max);

    return 0;
}

void maxe(int *a,int *b,int *max){
    if(*a>*b){
        *max=*a;
    }
    else{
        *max=*b;
    }
}
