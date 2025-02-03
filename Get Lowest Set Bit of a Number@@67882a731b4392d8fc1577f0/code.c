#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    int zero=0;
    while ((a&1)==0)
    {
        a=a>>1;
        zero++;
    }
    printf("%d",count);
    return 0;
}