#include <stdio.h>

int main() {
    int n, i;
    int fact = 1;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("%d", fact);

    return 0;
}

#include <stdio.h>

int main() {
    int n, digit, reverse = 0;

    scanf("%d", &n);

    while(n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("%d", reverse);

    return 0;
}