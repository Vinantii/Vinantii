#include<stdio.h>

int main(){
   int n,i,j;
   unsigned long fact = 1;
   printf("\nEnter the integer:");
   scanf("%d",&n);
   if(n<0){
    printf("\n Error! Factorial of negative number is not possible");
   }else{
    for ( i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("\n Factorial of %d is %lu", n, fact);
   }

    return 0;
}