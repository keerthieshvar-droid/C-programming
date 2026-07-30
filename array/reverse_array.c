#include<stdio.h>
int main()
{
      int arr[10],n;

      printf("Enter a number of elements:\n");
      scanf("%d" , &n);

      printf("Enter a elements:\n");

    for(int i = 0; i < n; i++)
  {
       scanf("%d" , &arr[i]);
  }

    printf("Reverse array:\n");

   for(int i = n - 1; i >= 0 ; i--)
  {
      printf("%d",arr[i]);
  }

  return 0;
}
