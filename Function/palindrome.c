#include<stdio.h>
int reverse(int n)
{
         int digit ,  rev = 0;
         while(n > 0)
{
          digit = n % 10;
          rev = rev * 10 + digit;
          n = n / 10;
}

   return rev;
}

int main()
{
      int n , result;

      printf("Enter a number:");
      scanf("%d" , &n);

      result = reverse(n);

      printf("Result = %d\n" , result);


     return 0;
}


