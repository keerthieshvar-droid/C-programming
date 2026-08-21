#include<stdio.h>
int main()
{
    int n = 0;
    int set_bits = 0;
    int total_bits = 0;

    printf("Enter a non negative integer: ");
    scanf("%d", &n);

    while(n > 0)
    {
         if(n % 2 == 1)
          {
             set_bits++;
           }
            total_bits++;
    }

       n = n / 2;

  printf("Set bits : %d\n" , set_bits);
  printf("Total bits : %d\n" , total_bits);

 return 0;
}
