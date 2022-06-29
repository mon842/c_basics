#include<stdio.h>


int add();

void rec(int c);
void cal();

int main(){
    rec(1);
    return 0;
}

void rec(int c){
    if(c==0){
        int a;
        printf("sure\n");
        scanf("%d",&a);
        if (a==1)
        {
            c=0;
            return;
        }
        else
        {
            c==1;
        }   
    }
    cal();
    rec(c-1);
}

void cal(){
    int a,b;
    printf("enter 2 digits to be calculated\n");
    scanf("%d%d",&a,&b);
    int ans=add(a,b);
    printf("%d\n",ans);
}

int add(int a,int b){
    int sum=a+b;
    return sum;
}