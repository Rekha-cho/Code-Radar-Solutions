#include <stdio.h>

int main() {
    int a, i;
    int isPrime = 1; // Assume the number is prime initially
    scanf("%d", &a);

    if (a <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i * i <= a; i++) {
            if (a % i == 0) {
                isPrime = 0; // If `a` is divisible by any number other than 1 and itself, it is not prime
                break;
            }
        }
    }

    if (isPrime) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}

