#include<stdio.h>
struct Number
{
        int n;
        int sum;
};
   int main()
  {
            struct Number num;
             int i;

           num.sum = 0;
            printf("Enter the value of N:");
            scanf("%d" , &num.n);

           for(i = 1; i <= num.n; i++);
           {
            num.sum = num.sum + i;
           }

          printf("Sum of first %d natural numbers = %d\n" , num.n , num.sum);

       return 0;
}

