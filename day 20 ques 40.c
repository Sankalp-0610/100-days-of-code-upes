/*
Q40 (Loops without Arrays/Strings)
Write a program to find the 1's complement of a binary number and print it.
*/
#include <stdio.h>

int main() {
    long long binary, complement = 0;
    int remainder, place = 1;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0) {
        remainder = binary % 10;
        int complementedBit = (remainder == 0) ? 1 : 0;
        complement += complementedBit * place;
        place *= 10;
        binary /= 10;
    }

    printf("1's Complement = %lld\n", complement);
    return 0;
}
