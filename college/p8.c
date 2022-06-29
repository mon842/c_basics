// Write  a program  that  converts
// (a) A lowercase character into its corresponding   uppercase
// (b) An uppercase character into its corresponding   lowercase

#include <stdio.h>

int main()
{
    char c;
    printf("enter character\n");
    scanf("%c", &c);
    if (isupper(c))
    {
        printf("\nEntered character is uppercase character\n");
        printf("%c in lowercase is represented as  %c",
               c, tolower(c));
    }
    else
    {
        printf("\nEntered character is not lowercase character\n");
        printf("%c in uppercase is represented as  %c",
               c, toupper(c));
    }
    return 0;
}