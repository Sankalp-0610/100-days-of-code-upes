/*
Q30 (Loops without Arrays/Strings)
Write a program to reverse a given number.
*/
#include <stdio.h>

int main() {
    long n, reversed = 0, remainder, original;
    printf("Enter a number: ");
    scanf("%ld", &n);

    original = n;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    printf("Reverse of %ld = %ld\n", original, reversed);
    return 0;
}
