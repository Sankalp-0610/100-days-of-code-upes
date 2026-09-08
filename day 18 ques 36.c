/*
Q36 (Loops without Arrays/Strings)
Write a program to find the HCF (GCD) of two numbers.
*/
#include <stdio.h>

int main() {
    int a, b, hcf = 1;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    hcf = x;

    printf("HCF of %d and %d = %d\n", a, b, hcf);
    return 0;
}
