#include<stdio.h>
int sequences(int arr[],int n)
{
     for(int i = 0; i < n; i++)
        {
          if(arr[i] - arr[i + 1] != 1)
           {
              return 1;
           }
          else
           {
              return 0;
           }
       }
}
int main()
{
   int arr[25],n,i,valid;
  printf("Enter a number of elements:");
   scanf("%d" , &n);

  printf("Enter array elements:");
   for(i = 0; i < n; i++)
      {
        scanf("%d" , &arr[i]);
      }

       valid = sequences(arr, n);

   if(valid == 1)
     {
       printf("Valid sequences");
     }
   else
     {
      printf("Invalid sequences");
     }

 return 0;
}
