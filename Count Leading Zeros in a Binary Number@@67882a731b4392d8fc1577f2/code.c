#include <stdio.h>
int main(){
    int a,n;
    scanf("%d", &a);
    int count=0;
    n=1<<31;
    while ((a&n)==0)
    {
        n=n>>1;
        count++;
    }
    printf("%d", count);
    return 0;
}