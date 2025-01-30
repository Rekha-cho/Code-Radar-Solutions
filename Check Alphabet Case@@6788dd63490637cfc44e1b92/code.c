#include <stdio.h>
int main ()
{
    char a;
    scanf("%d", &a);
    if (a>='a' && a<='z')
    printf("lowercase");
    else if (a>='A'' && a<='Z')
    printf("Uppercase");
    else
    printf("Not an alphabet");
    return 0;
}