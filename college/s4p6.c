#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.\n", name);
    printf("Your name is %s.\n", name[0]);
    return 0;
}