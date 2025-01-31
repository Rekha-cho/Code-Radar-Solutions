#include <stdio.h>
int main ()
{
    int a,b;
    scanf("%d %d", &a,&b);
    if (a==b){
        if (a>b)
        printf("First");
        else 
        printf("second");
    }
    printf("Equal");
    return 0;
}