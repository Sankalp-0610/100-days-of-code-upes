/*
Q39 (Loops without Arrays/Strings)
Write a program to find the product of odd digits of a number.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    long n, original;
    long product = 1;
    int remainder;
    printf("Enter a number: ");
    scanf("%ld", &n);

    original = n;
    n = labs(n);

    while (n != 0) {
        remainder = n % 10;
        if (remainder % 2 != 0)
            product *= remainder;
        n /= 10;
    }

    printf("Product of odd digits of %ld = %ld\n", original, product);
    return 0;
}
