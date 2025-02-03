#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int zero=0;
    while((n&1)==0){
        n=n>>1;
        zero++;
    }
    printf("%d",zero);
    return 0;
}