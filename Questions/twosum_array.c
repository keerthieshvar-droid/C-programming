#include<stdio.h>

int main()
{
   int a[50] ,n, target;
    int i , j;


    scanf("%d" , &n);

    for(i = 0; i < n; i++)
 {
    scanf("%d" , &a[i]);
 }

    scanf("%d" , &target);

    for(i = 0; i < n; i++)
  {
     for( j = i + 1; j < n; j++)
       {
          if(a[i] + a[j] == target)
          {
             printf("%d %d" , i, j);
          }
       }
  }

return 0;
}
