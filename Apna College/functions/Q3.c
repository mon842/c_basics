#include<stdio.h>
// to find out the gst from the final amount or gst from base price or finding the final amout
void GfF();
void GfB();
void FfB();
void FBfG();

int main(){
    int o;
    printf("enter 1:to find out the gst from the final amount; 2 :to find out gst from base price; 3:to find out the final amout; 4: final and base amount form gst\n");
    scanf("%d",&o);
    if (o==1)
    {
        GfF();
    }
    else if (o==2)
    {
        GfB();
    }
    else if (o==3)
    {
        FfB();
    }
    else if (o==4)
    {
        FBfG();
    }
    else
    {
        printf("mf put valid option");
    }
    
    return 0;
}

void GfF(){
    double FA;
    printf("Enter the final amount\n");
    scanf("%lf",&FA);
    double G,ba=0.0;
    ba=FA/1.18;
    G=FA-ba;
    printf("The GSt is %lf and the base amount is %lf of the final amount %lf",G,ba,FA);
}
void GfB(){
    double ba;
    printf("Enter the base amount\n");
    scanf("%lf",&ba);
    double G,FA=0.0;
    G=ba*0.18;
    FA=ba+G;
    printf("The GSt is %lf and the base amount is %lf of the final amount %lf",G,ba,FA);
}
void FfB(){
    double ba;
    printf("Enter the base amount\n");
    scanf("%lf",&ba);
    double G,FA=0.0;
    G=ba*0.18;
    FA=ba+G;
    printf("The GSt is %lf and the base amount is %lf of the final amount %lf",G,ba,FA);
}
void FBfG(){
    double G;
    printf("Enter the GSt\n");
    scanf("%lf",&G);
    double ba,FA=0.0;
    ba=(G/18)*100;
    FA=ba+G;
    printf("The GSt is %lf and the base amount is %lf of the final amount %lf",G,ba,FA);
}