#include <stdio.h>
int main ()
{
    char a;
    scanf("%d", &a);
    if (a<='a' && a>='z')
    printf("Uppercase");
    else if (a<='A' && a>='Z')
    printf("Lowercase");
    else
    printf("Not an alphabet";
    return 0;)
}