#include<stdio.h>
int main()
{
      int n,i,j,s;
      printf("Enter a value: ");
      scanf("%d" , &n);

     for(i = 0; i < n; i++)
     {
       for(s = 0; s < n-i-1; s++)
        {
          printf("  ");
        }

          for(j = 0; j < 2*i+1; j++)
            {
                if(j == 0 ||j == 2*i ||i == n - 1)
                    printf("* ");
               else
                    printf("  ");
             }
          printf("\n");
      }

  return 0;
}

