// Your code here...
#include <stdio.h>

int main() {
    int n, i, j, space, num;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Printing spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Printing numbers
        num = 1;
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%d", num);
            if (j < i) {
                num++;
            } else {
                num--;
            }
        }
        printf("\n");
    }

    return 0;
}
