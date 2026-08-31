#include <stdio.h>
struct Number
{
         int num;
         int rev;
         int rem;
};
     int main()
{
         struct Number n;
      {
          n.rev = 0;
         printf("Enter a number:");
         scanf("%d" , &n.num);

       while(n.num != 0);

          n.num = n.num % 10;
          n.rev = n.rev *  10 + n.rem;
          n.rem = n.num / 10;
        }

          printf("Reverse number = %d\n" , n.rev);

     return 0;
}
