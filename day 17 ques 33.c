/*
Q33 (Loops without Arrays/Strings)
Write a program to check if a number is an Armstrong number.
*/
#include <stdio.h>
#include <math.h>

int main() {
    long n, original, remainder, result = 0;
    int digits = 0;
    printf("Enter a number: ");
    scanf("%ld", &n);

    original = n;

    long temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        result += (long)pow(remainder, digits);
        temp /= 10;
    }

    if (result == original)
        printf("%ld is an Armstrong number\n", original);
    else
        printf("%ld is not an Armstrong number\n", original);

    return 0;
}
