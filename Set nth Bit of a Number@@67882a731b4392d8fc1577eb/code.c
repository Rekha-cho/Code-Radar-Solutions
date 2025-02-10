#include <stdio.h>
int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    num = num | (1 << n);
    printf("%d %d\n", n, num);
    return 0;
}
