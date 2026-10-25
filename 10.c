


#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, r1, r2;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d >= 0) {
    {
        printf("Roots are real and different");
    }
   
  
        if (d == 0)
        {
            printf("Roots are real and same:" );

            }

            }

        else
        {
            printf("Roots are complex");
        }
    }

    #include <stdio.h>

int main()
{
    float p;

    printf("Enter percentage: ");
    scanf("%f", &p);

    if (p >= 90)
        printf("Grade A");

    else if (p >= 80)
        printf("Grade B");

    else if (p >= 70)
        printf("Grade C");

    else if (p >= 60)
        printf("Grade D");

    else
        printf("Grade F");

    return 0;
}