#include<stdio.h>
int main()
{
   int arr[100],n,i,j;
   int max,min,duplicates = 0;

   printf("Enter a number of elements:");
   scanf("%d" , &n);

   printf("Enter array elements:");
   for(i= 0; i < n; i++)
    {
     scanf("%d" , &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i = 0; i < n; i++)
     {
       if(arr[i] > max)
           max = arr[i];

       if(arr[i] < min)
           min = arr[i];
     }

     for(i = 0; i < n; i++)
       {
         for(j = 0; j < n; j++)
           {
              if(arr[i] == arr[j])
              {
                duplicates = 1;
               }
           }
       }

       if((max - min == n - 1) && (duplicates == 0))
          printf("Continuous sequences");
      else
          printf("Not Continuous");

        return 0;
 }
