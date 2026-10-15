#include<stdio.h>

int main()
{
    int a = 1;
    int *ptr = &a;

 printf("Enter a value of a: %d\n", a);

  *ptr = 4;

printf("Enter a value of a : %d\n" , a);

 return 0;
}
