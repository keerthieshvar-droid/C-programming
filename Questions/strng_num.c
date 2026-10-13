#include<stdio.h>

int factorial(int n)
{
          int fact = 1;

       for(int i = 1; i <= n; i++)
       {
          fact = fact * i;
      }

    return fact;
}
int isStrongNumber(int n)
{
    int original = n;
    int sum = 0;
    int digit;

    while(n > 0){
         digit = n % 10;
         sum = sum + factorial(digit);
         n = n / 10;
}

   if(sum == original)
        return 1;
   else
        return 0;
}
int main()
{
    int n;

     scanf("%d" , &n);

     if(isStrongNumber(n))
         printf("Strong number");
     else
          printf("Not a Strong number");
}
