#include <stdio.h>

struct Year
{
    int year;
};

        int main()
{

           struct Year y;
           printf("Enter a year:");
           scanf("%d" , &y.year);

           if((y.year % 400 == 0) || (y.year % 4 == 0 && y.year % 100 !=0))
        {
           printf("%d is a leap year.\n" , y.year);
        }

           else 
        {
             printf("%d is not a leap year.\n" , y.year);
        }
      return 0;
}
