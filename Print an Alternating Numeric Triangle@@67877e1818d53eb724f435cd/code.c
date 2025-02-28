// Your code here...
#include <stdio.h>

int main() {
    int n, i, j, num;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        num = i % 2; // Start with 0 for even rows and 1 for odd rows
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num = (num + 1) % 2; // Alternate between 0 and 1
        }
        printf("\n");
    }

    return 0;
}
