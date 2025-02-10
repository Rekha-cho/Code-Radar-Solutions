#include <stdio.h>
int main(){
    int num;
    int count=0;
    scanf("%d", &num);
    while ((num&1)==0 && num != 1){
        num>>=1;
        count++;
    }
    printf("%d", count);
    return 0;
}