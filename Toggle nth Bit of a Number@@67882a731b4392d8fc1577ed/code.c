#include <stdio.h>
int main ()
{
    int a,b,num;
    scanf("%d %d", &a,&b);
    num=a ^ (1<<b);
    printf("%d",num);
    return 0;
}