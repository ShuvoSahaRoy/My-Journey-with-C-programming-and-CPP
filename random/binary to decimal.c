#include <math.h>
#include <stdio.h>

int main() {
    int n;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    printf("%d in binary = %d in decimal\n", n, convert(n));
    printf("%d in Octal = %d", n, Octal(n));
    return 0;
}

int convert(int n) {
    int bin = 0;
    int rem, i = 1, step = 1;
    while (n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

int Octal(int decimalNumber)
{
    int octalNumber = 0, i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}
