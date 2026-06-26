#include <stdio.h>

struct Number

{
    int num;
};

      int main()
{
          struct Number n;

               printf("Enter a number: ");
               scanf("%d" , &n.num);

       if ( n.num %2 ==0)
          {
           printf("%d is even\n" , n.num);
          }
       else
          {
           printf("%d is odd\n" , n.num);
          }

       return 0;
}
