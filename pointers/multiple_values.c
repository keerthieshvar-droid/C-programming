#include<stdio.h>

void calculate(int a, int b, int *sum, int *difference)
{
     *sum = a + b;
     *difference = a - b;
}

int main()
{
    int a,b;
    int sum,difference;

  printf("Enter a number: ");
  scanf("%d %d" , &a, &b);

  calculate(a,b , &sum, &difference);

  printf("Sum : %d\n" , sum);
  printf("Difference : %d\n" , difference);

 return 0;
}
