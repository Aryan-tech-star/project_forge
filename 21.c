#include <stdio.h>

int main() {
    int n, first, last, temp, power = 1, result;

    scanf("%d", &n);

    last = n % 10;

    temp = n;

    while(temp >= 10) {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;

    result = n - first * power - last;
    result = result + last * power + first;

    printf("%d", result);

    return 0;
}

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    scanf("%d", &n);

    for(i = 1; i < n; i++) {
        if(n % i == 0) {
            sum = sum + i;
        }
    }

    if(sum == n)
        printf("Perfect Number");
    else
        printf("Not Perfect Number");

    return 0;
}