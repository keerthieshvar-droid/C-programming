#include<stdio.h>

int findmax(int arr[] , int n)
{
         int i;
         int max = arr[0];

       for(i = 0; i < n; i++)
         {
            if(arr[i] > max)
            {
               max = arr[i];
            }
         }
     return max;
}

int main()
{
        int arr[100] , n, i, max;
        printf("Enter a number of elements:");
        scanf("%d" , &n);

        printf("Enter array elements:");
        for(i = 0; i < n; i++)
          {
            scanf("%d" , &arr[i]);
          }

       max = findmax(arr , n);

   printf("Maximum elements : %d\n" , max);

   return 0;
}
