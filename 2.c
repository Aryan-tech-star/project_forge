//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>  
int main ()
{
int a,b ,sum,diff,product;

printf("enter two numbers :");
scanf("%d %d",&a, &b);

sum= a+b;
diff = a-b;
product = a*b;

printf("sum = %d\n",sum)   ;
printf("diff = %d\n",diff) ;
printf("product = %d\n",product) ;


return 0 ;
}

