/*
Q41 (Loops without Arrays/Strings)
Write a program to swap the first and last digit of a number.
*/
#include <stdio.h>
#include <math.h>

int main() {
    long n, firstDigit, lastDigit, result;
    int digits = 0;
    printf("Enter a number: ");
    scanf("%ld", &n);

    long temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    lastDigit = n % 10;
    firstDigit = n / (long)pow(10, digits - 1);

    result = n - (firstDigit * (long)pow(10, digits - 1)) - lastDigit;
    result = result + (lastDigit * (long)pow(10, digits - 1)) + firstDigit;

    printf("After swapping first and last digit: %ld\n", result);
    return 0;
}
