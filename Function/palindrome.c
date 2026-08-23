#include <stdio.h>

int ispalindrome(int n)
{
     int original = n;
     int reverse = 0;
     int digit;

  while(n > 0)
  {
     digit = n % 10;
     reverse = reverse * 10 + digit;
     n = n / 10;
  }

   if(original == reverse)
     return 1;
   else
     return 0;
}

int main()
{
    int arr[100], n, i;

     printf("Enter a number of elements:");
     scanf("%d", &n);

    printf("Enter array elements:");
   for(i = 0; i < n; i++)
   {
       scanf("%d" , &arr[i]);
   }

    for(i = 0; i < n; i++)
   {
         if(ispalindrome(arr[i]) == 0)
         {
           printf("First Non-palindrome = %d\n" , arr[i]);
           break;
         }
   }

  return 0;
}

