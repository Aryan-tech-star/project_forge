#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("%d is largest", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d is largest", b);
    }
    else
    {
        printf("%d is largest", c);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    char ch;

    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase Alphabet");

    else if(ch >= 'a' && ch <= 'z')
        printf("Lowercase Alphabet");

    else if(ch >= '0' && ch <= '9')
        printf("Digit");

    else
        printf("Special Character");

    return 0;
}

// #include <stdio.h>
// int main()
// {
// char ch ; 
 
// printf("enter character :");
// scanf("%c",&ch);

// if(ch>='A' && ch <= 'z' ) 
// {
//     if(ch>='A' && ch <= 'z')
// {
//     printf("uppercase");
// }

// else 
// {
//     printf("lowercase");
// }
 
// }
//     else
//     {
//         if (ch >= '0' && ch <= '9')
//         {
//             printf("Digit");
//         }
//         else
//         {
//             printf("Special character");
//         }
//     }

//     return 0;
// }