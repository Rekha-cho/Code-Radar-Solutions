#include <stdio.h>
int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    printf("%d\n", (1<<n) |num);
    return 0;
}
