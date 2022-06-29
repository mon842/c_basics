#include<stdio.h>
#include<math.h>

void pow1(int a,int b);
void _pow1(int a,int b);

int main(){
    int x,y;
    printf("enter the base and power\n");
    scanf("%lf%lf",&x,&y);
    
    pow1(x,y);
    _pow1(x,y);
    return 0;
}

void pow1(int a,int b){
    int ans=1;
    for (int i = 0; i < b; i++)
    {
        ans=ans*a;
    }
    printf("for %d\n",ans);
}
void _pow1(int a,int b){
    int ans=pow(a,b);
    printf("pow %d\n",ans);
}