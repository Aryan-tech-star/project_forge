#include <stdio.h>
int main () {
int C,celsius , Fahrenheit ;

printf("enter the celsius value");
scanf("%d \n",&celsius);

Fahrenheit = (C * 9/5) + 32. ;

printf("value is %d",Fahrenheit) ;

return 0 ;
}

#include <stdio.h>
int main () {
    int a, b , c ;

    printf("enter two number");
    scanf("%d %d",&a , &b);

 printf("before swapping  a = %d ,b =  %d\n", a , b);


    c = a;
    a = b ;
    b = c;
    
    printf("after swapping a= %d , b = %d\n", a , b);

    return 0 ;
}