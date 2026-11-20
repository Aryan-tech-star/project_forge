#include <stdio.h>

int main() {
    int a, b, lcm;

    scanf("%d %d", &a, &b);

    lcm = (a > b) ? a : b;

    while(1) {
        if(lcm % a == 0 && lcm % b == 0) {
            break;
        }

        lcm++;
    }

    printf("%d", lcm);

    return 0;
}

#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    scanf("%d", &n);

    while(n != 0) {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("%d", sum);

    return 0;
}