#include <stdio.h>

int main() {
    int n, digit, product = 1;

    scanf("%d", &n);

    while(n != 0) {
        digit = n % 10;

        if(digit % 2 != 0) {
            product = product * digit;
        }

        n = n / 10;
    }

    printf("%d", product);

    return 0;
}

#include <stdio.h>

int main() {
    long long n, result = 0, place = 1;
    int digit;

    scanf("%lld", &n);

    while(n != 0) {
        digit = n % 10;

        if(digit == 0)
            digit = 1;
        else
            digit = 0;

        result = result + digit * place;
        place = place * 10;
        n = n / 10;
    }

    printf("%lld", result);

    return 0;
}