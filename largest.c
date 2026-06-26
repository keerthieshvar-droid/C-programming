#include <stdio.h>

struct Numbers 
{
       int num1;
       int num2;
};

int main()
{
          struct Numbers n;

          printf("Enter first number:");
          scanf("%d" , &n.num1);

          printf("Enter second number:");
          scanf("%d" , &n.num2);

         if(n.num1 > n.num2)
           {
             printf("%d is the largest number.\n" , n.num1);
           }
          else if(n.num2 > n.num1)
           {
             printf("%d is the largest number.\n" , n.num2);
           }
           else
           {
              printf("Both number are equal.\n");
           }

      return 0;
}
