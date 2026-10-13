#include<stdio.h>

void printButterfly(int n)
{
     int i,j;
     for(i = 1; i <= n; i++)
     {
       for(j = 1; j <= i; j++)
             printf("*");
       for(j = 1; j <= 2*(n - i); j++)
             printf(" ");
       for(j = 1; j <= i; j++)
             printf("*");

      printf("\n");
}
  for(i = n-1; i >= 1; i--)
  {
        for(j = 1; j <= i; j++)
             printf("*");
        for(j = 1; j <= 2*(n-i); j++)
             printf(" ");
        for(j = 1; j <= i; j++)
             printf("*");

       printf("\n");
}
}
int main()
 {
       int n;
       scanf("%d" , &n);
       printButterfly(n);
return 0;
}

