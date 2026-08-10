#include<stdio.h>
void inputArray(int arr[],int n)
{
    int i;

   for(i = 0; i < n; i++)
     {
       scanf("%d" , &arr[i]);
     }
}

int main()
{
      int arr[100],n,i;

      printf("Enter a number of elements: ");
      scanf("%d" , &n);

      printf("Enter array elements: ");
      inputArray(arr,n);

     printf("Array elements are\n");

     for(i = 0; i < n; i++)
       {
         printf("%d" , arr[i]);
       }

   return 0;
}
