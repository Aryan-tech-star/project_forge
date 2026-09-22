
// #include<stdio.h>  
// int main ()
// {
// int positive , negative , number , n;

// printf("enter number");
// scanf("%d",&number);

// if(n<=0){
//     if(n==0) 
//     printf("zero");
    

// else 
//     printf("negative") ; 


// }
// else {
// printf("positive");
// }
// return 0 ;
// }


#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Even");
    }
    else {
        printf("Odd");
    }

    return 0;
}