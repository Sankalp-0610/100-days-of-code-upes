/*
Q32 (Loops without Arrays/Strings)
Write a program to check if a number is a palindrome.
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

    if (original == reversed)
        printf("%ld is a Palindrome\n", original);
    else
        printf("%ld is not a Palindrome\n", original);

    return 0;
}
