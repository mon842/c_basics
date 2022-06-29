#include<stdio.h>

// int main(){
//     int fn=0,sn=1,sum=1,s=0;
//     int n;
//     printf("enter\n");
//     scanf("%d",&n);
//     for (int i = 2; i < n; i++)
//     {
//         sum=sum+sn+fn;
//         s=sn+fn;
//         fn=sn;
//         sn=s;
//     }
//     printf("sum = %d\n",sum);
//     return 0;
// }

int rec(int n);

int main(){
    int n;
    printf("enter\n");
    scanf("%d",&n);
    int sum=rec(n);
    printf("sum = %d\n",sum);
    return 0;
}

int rec(int n){
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    int o=rec(n-1);
    int t=rec(n-2);
    int rec=o+t;
    // printf(rec);
    
    return rec;
}