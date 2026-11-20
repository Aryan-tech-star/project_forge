#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = sum + (2 * i - 1);
    }

    printf("%d", sum);

    return 0;
}

#include <stdio.h>

int main() {
    int n, i;
    int product = 1;

    scanf("%d", &n);

    for(i = 2; i <= n; i = i + 2) {
        product = product * i;
    }

    printf("%d", product);

    return 0;
}