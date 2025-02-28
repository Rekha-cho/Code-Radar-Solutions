// Your code here...
#include <stdio.h>

int main() {
    int n, i, j, space;
    char ch;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (space = 1; space <= n - i; space++) {
            printf("  ");
        }
        ch = 'A';
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%c ", ch);
            if (j < i) {
                ch++;
            } else {
                ch--;
            }
        }
        printf("\n");
    }

    return 0;
}
