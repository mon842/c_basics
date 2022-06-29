#include<stdio.h>

void oh(int x,int l);

int main(){
    int x=65;
    int l;
    printf("enter the lenght\n");
    scanf("%d",&l);
    int p=l+1;
    for (int i = 0; i < l; i++)
    { 
        x=65;
        for (int j = 0; j < p; j++)
        {
            if (i==0)
            {
                printf("%d ",x++);
                if (j==l-1)
                {
                    x=x-2;
                    oh(x,l);
                }
            }
            else if (j<l)
            {
                
            }
              
        }
        printf("\n");
    }
    
    return 0;
}

void oh(int x,int l){
    
    for (int j = 0; j < l-1; j++)
    {
        printf("%d ",x--);
    }
}