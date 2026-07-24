#include <stdio.h>
int main()
{
    int a = 7, b = 21, c = 11;

     printf("Enter three integers :");
     scanf("%d%d%d" , &a, &b, &c);

  if(a >= b && a >=c)
{
    printf("a is largest : %d\n" , a);
}

  else if(b >= a && b >= c)
{
    printf("b is largest : %d\n" , b);
}

  else
{
    printf("c is largest : %d\n" , c);
}

  return 0;
}
