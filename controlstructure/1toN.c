#include <stdio.h>
int main()
{
   int N;

   printf("Enter a integer: ");
   scanf("%d" , &N);

   printf("Number from 1 to %d\n are:\n", N);

   for( int i = 0; i <= N; i++)
     printf("%d\n" , i);
{
      printf("\n");
}

return 0;
}
