#include<stdio.h>
#include <string.h>

int main(){
    int n=0;
    char s[n],a[n];
    scanf("%s",s);
    scanf("%s",a);
    // a[n]=s[n];
    strrev(s);
    if (strcmp(a, s) == 0)
      printf("Yes 2 strings are same %s %s \n",s,a);
   else
      printf("No, 2 strings are not same %s %s \n",s,a);
    return 0;
}

