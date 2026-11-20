#include <stdio.h>
#include <math.h>

int main() {
    int n, original, temp, digit;
    int digits = 0, sum = 0;

    scanf("%d", &n);

    original = n;
    temp = n;

    while(temp != 0) {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while(temp != 0) {
        digit = temp % 10;
        sum = sum + pow(digit, digits);
        temp = temp / 10;
    }

    if(sum == original) {
        printf("Armstrong Number");
    }
    else {
        printf("Not Armstrong Number");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}