// #include<stdio.h>
// int main ()
// {
// int length, breadth ,perimeter;

// printf("enter length of rectangle");
// scanf("%d",&length); 

// printf("enter breadth of rectangle");
// scanf("%d",&breadth); 

// perimeter = 2*(length + breadth);

// printf("%d\n",length*breadth);
// printf("%d\n",perimeter);

// return 0 ;
// }

#include<stdio.h>
int main()
{
int radius,pi;
pi = (int) 3.14 ; 

printf("enter radius of circle");
scanf("%d",&radius); 

printf("the perimeter %d \n",2*pi*radius);
printf("the area of circleis %d",pi*radius*radius);

return 0 ;
 } 