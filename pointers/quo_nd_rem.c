#include<stdio.h>

void calculate(int a, int b, int *quotient, int *remainder)
{
    *quotient = a / b;
    *remainder = a % b;
}
int main()
{
     int a, b;
     int quotient, remainder;

     printf("Enter two number: ");
     scanf("%d %d" , &a, &b);

     calculate(a, b, &quotient, &remainder);

    printf("Quotient : %d\n" , quotient);
    printf("Remainder : %d\n" , remainder);

 return 0;
}
