#include <stdio.h>

int main() {
    int n, remainder;
    long long binary = 0, place = 1;

    scanf("%d", &n);

    while(n > 0) {
        remainder = n % 2;

        binary = binary + remainder * place;

        place = place * 10;
        n = n / 2;
    }

    printf("%lld", binary);

    return 0;
}

#include <stdio.h>

int main() {
    int n, original, digit, reverse = 0;

    scanf("%d", &n);

    original = n;

    while(n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if(original == reverse) {
        printf("Palindrome");
    }
    else {
        printf("Not Palindrome");
    }

    return 0;
}