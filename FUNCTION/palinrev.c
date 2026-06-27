#include <stdio.h>

int reverse(int n)
{
        int rev = 0;

         while (n > 0)
         {
             rev = rev * 10 + (n % 10);
             n = n / 10;
         }

          return rev;
}

int isPalindrome(int n)
{
         if(n == reverse(n))
             return 1;
         else
             return 0;
}
 int main()
{
         int num;
         printf("Enter a number:");
         scanf("%d",&num);

         if(isPalindrome(num))
              printf("%d is a Palindrome Number\n",num);
         else
              printf("%d is Not a palindrome Number\n",num);

       return 0;
}
