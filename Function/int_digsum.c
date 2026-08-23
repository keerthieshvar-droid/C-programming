#include<stdio.h>

int digitsum(int n)
{
     int sum = 0;

    while(n > 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }

   return sum;
}

int main()
{
    int arr[100], n, i;
    printf("Enter a number of elements: ");
    scanf("%d" , &n);

    printf("Enter array elements: ");
    for(i = 0; i <= n; i++)
      {
          scanf("%d" , &arr[i]);
      }

  printf("Number whose digit sum is even:\n");

   for(i = 0; i <= n; i++)
    {
         if(digitsum(arr[i]) % 2 == 0)
          {
              printf("%d" , arr[i]);
          }
    }
return 0;
}
