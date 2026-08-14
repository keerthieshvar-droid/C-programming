#include<stdio.h>

int sumofDigits(int n)
{
     int sum = 0;

      while (n > 0)
      {
        sum = sum + (n % 10);
         n = n / 10;
      }

       return sum;
}

     int main()
{
      int num;

      printf("Enter a number:");
      scanf("%d" , &num);

      printf("Sum Of Digits = %d\n" , sumofDigits(num));

      return 0;
}
