#include<stdio.h>

int main()
{
    int x = 20;

    int *ptr = &x;

   printf("Enter a value: %d\n", x);
   printf("Enter a value: %p\n", &x);
   printf("Enter a address: %p\n",ptr);

return 0;
}
