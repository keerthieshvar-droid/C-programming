#include <stdio.h>

int main()
{
   int num, divisor;
   int is_prime;
   int count = 0;

   for(num = 2; num <= 50; num++)
      {
        is_prime = 1;

      for(divisor = 2; divisor < num; divisor++)
         {
           if(num % divisor == 0)
             {
                is_prime = 0;
                 break;
             }
         }

    if(is_prime == 1)
     {
         printf("%d" , num);
          count++;
     }
  }

   printf("\n Total number of primes = %d\n" , count);

   return 0;
}
