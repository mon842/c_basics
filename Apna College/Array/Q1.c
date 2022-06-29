#include<stdio.h>

int main(){
    int price[4];
    printf("Enter the price of Processor\n");
    scanf("%d",&price[0]);
    printf("Enter the price of Motherboard\n");
    scanf("%d",&price[1]);
    printf("Enter the price of Graphics Card\n");
    scanf("%d",&price[2]);
    printf("Enter the price of ssd\n");
    scanf("%d",&price[3]);
    int fa=price[0]+price[1]+price[3]+price[2];
    int gst=fa*0.18;
    printf("%d",gst);
    return 0;
}
// char ch[10]
// 1x10=10 bytes
 
// int a[5]
// 4x5=20 bytes