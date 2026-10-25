#include <stdio.h>

int main()
{
   int day;

    printf("Enter day : ");
    scanf("%d", &day );

    if (day <= 5)
        printf("₹2/day");

    else if (day <= 10)
        printf("₹4/day");

    else if (day <= 30)
        printf("₹6/day");


    else
        printf("membership cancelled");

    return 0;
}

#include main 
    int main () {
int units ; 

printf("enter units :")
scanf("%d" &units);

if(units <= 100) {
printf("2 rs per unit");
}

else if(units <= 200) {
printf("5 rs per unit")
}

else if(units <= 300) {
printf("10 rs per unit");
}

else {
    printf("12 rs per unit");
}

  return 0;
}

#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch(op)
    {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            printf("Result = %d", a / b);
            break;

        case '%':
            printf("Result = %d", a % b);
            break;

        default:
            printf("Invalid operator");
    }

    return 0;

}