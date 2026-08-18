#include<stdio.h>
int main()
{
    int a;
    float b;
    double c;
    double sum, average;

   printf("Enter a integer:");
   scanf("%d" , &a);

   printf("Enter a float:");
   scanf("%f" , &b);

   printf("Enter a double:");
   scanf("%lf" , &c);

    sum = a + b + c;

   average = sum / 3;

  printf("Sum = %.2f\n" , sum);
  printf("Average = %.2f\n" , average);

  return 0;
}
