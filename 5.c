// #include <stdio.h>
// int main () {
//     int a, b , c ;

//     printf("enter two number");
//     scanf("%d %d",&a , &b);

//  printf("before swapping a= %d , b = %d\n", a , b);

// a = a+b ;
// b = a -b ;
// a = a-b ;

// printf("after swapping a= %d , b = %d\n", a , b);

// return 0 ;

// }

#include <stdio.h>
int main () {

int n , sum;

printf("enter value of n for sum of n natural numbers :");
scanf("%d",&n);

sum = (n*(n+1))/2 ;

printf("%d",sum) ;
return 0 ;
}