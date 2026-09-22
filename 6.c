#include<stdio.h>
int main ()
{
int p, r ,t , a ;
 printf("enter principal ");
 scanf("%d",&p);

 printf("enter rate ");
 scanf("%d",&r);

 printf("enter time ");
 scanf("%d",&t);

 a = (p*r*t)/100;

 printf("simple interest is %d",a);

 return 0;

}

#include <stdio.h>
int main () {
int hour,min ,sec ;

printf("enter time in sec");
scanf("%d",&sec);

hour = sec/3600 ;
min = sec%60;
sec = sec%60 ; 

printf("%d:%d:%d",hour,min,sec) ;

return 0 ;
}

