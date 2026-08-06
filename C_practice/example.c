#include<stdio.h>
int main()
{
   int n, i;
   int arr[100];
   int invalidcount = 0;

  printf("Enter a number of tempertaure readings: ");
  scanf("%d" , &n);

  printf("Enter a tempertaure range: ");
  for(i = 0; i < n; i++)
{
      scanf("%d" , &arr[i]);
}

   //check temperature values

   for(i = 0; i < n; i++)
     {
        if(arr[i] < 0 || arr[i] > 100)
         {
            arr[i] = -1;
            invalidcount++;
         }
    }
       printf("Modified value:\n");

          for(i = 0; i < n; i++)
            {
              printf("%d" , arr[i]);
            }

              printf("Invalid count : %d\n" , invalidcount);

      return 0;
}
