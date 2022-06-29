    // Input a 5 digits number. Now write  a program 
    //     (a) To calculate the sum of digits
    //     (b) To calculate the sum of the last two digits
    //     (c) To reverse the number.	

#include<stdio.h>

int a(int n);
int b(int n);
int c(int n);

int main(){
    int t;
    printf("enter the num\n");
    scanf("%d",&t);
    a(t);
    b(t);
    c(t);
    return 0;
}

int a(int n){
    int dup=n;
    int d=0,sum=0;
    while (dup!=0)
    {
        d=dup%10;
        sum=sum+d;
        dup=dup/10;
    }
    printf("the sum is %d\n",sum);
}
int b(int n){
    int dup=n;
    int d=0,sum=0;
    for (int i = 0; i < 2; i++)
    {
        d=dup%10;
        sum=sum+d;
        dup=dup/10;
    }
    
    printf("the sum is %d\n",sum);
}
int c(int n){
    int dup=n;
    int d=0,rev=0;
    while (dup!=0)
    {
        d=dup%10;
        rev=10*rev+d;
        dup=dup/10;
    }
    printf("the rev is %d\n",rev);
}