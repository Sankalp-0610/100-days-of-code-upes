/*
Q31 (Loops without Arrays/Strings)
Write a program to take a number as input and print its equivalent binary representation.
*/
#include <stdio.h>

int main() {
    long long n, binary = 0;
    int remainder, place = 1;
    printf("Enter a number: ");
    scanf("%lld", &n);

    if (n == 0) {
        printf("Binary = 0\n");
        return 0;
    }

    long long original = n;
    while (n != 0) {
        remainder = n % 2;
        binary += remainder * place;
        place *= 10;
        n /= 2;
    }

    printf("Binary representation of %lld = %lld\n", original, binary);
    return 0;
}

