#include<stdio.h>
int sumofdigits(int n)
{
     int sum = 0;

   while(n != 0)
    {
         sum = sum + (n % 10);
         n = n / 10;
    }

    return sum;
}

int main()
{
       int num, result;

        printf("Enter a number:");
        scanf("%d" , &num);

      result = sumofdigits(num);

       printf("Sum of Digits : %d\n" , result);

    return 0;
}
