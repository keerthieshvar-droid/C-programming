#include <stdio.h>
int main()
{
   int a = 15, b = 42, c = 29;

   printf("Enter three integers:");
   scanf("%d%d%d" , &a, &b, &c);

    if(a>=b && a >= c)
{
    printf("a is largest number : %d\n" , a);
}
    else if( b >= a && b >= c)
{
    printf("b is largest number : %d\n" , b);
}
    else
{
    printf("c is largest number : %d\n" , c);
}

   return 0;
}
