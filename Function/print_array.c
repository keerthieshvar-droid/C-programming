#include<stdio.h>

void printArray(int arr[] , int n)
{
     int i;

     for(i = 0; i < n; i++)
      {
         printf("%d" , arr[i]);
      }
}

int main()
{
     int arr[100], n, i;

     printf("Enter a number of element: ");
     scanf("%d" , &n);

     printf("Enter a array element : ");
     for(i = 0; i < n; i++)
{
    scanf("%d", &arr[i]);
}

printArray(arr , n);

   return 0;
}
