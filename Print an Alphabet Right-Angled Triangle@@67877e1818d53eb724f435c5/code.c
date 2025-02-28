// Your code here...
#include <stdio.h>

int main() {
    int n, i, j;
    char ch;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        ch = 'A';  // Initialize the starting character for each row
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;  // Move to the next character
        }
        printf("\n");
    }

    return 0;
}
