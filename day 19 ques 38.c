/*
Q38 (Loops without Arrays/Strings)
Write a program to find the sum of digits of a number.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    long n, original;
    int sum = 0, remainder;
    printf("Enter a number: ");
    scanf("%ld", &n);

    original = n;
    n = labs(n);

    while (n != 0) {
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }

    printf("Sum of digits of %ld = %d\n", original, sum);
    return 0;
}
