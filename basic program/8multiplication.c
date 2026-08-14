#include<stdio.h>

void table(int n)
{
       int i;
       printf("Multiplication Table of %d\n",n);

       for(i = 1; i <= 10; i++)
       {
          printf("%d x %d = %d\n" , n , i , n * i);
       }
}

         int main()
{
        int num;
        printf("Enter a number :");
        scanf("%d",&num);

        table(num);

         return 0;
}
