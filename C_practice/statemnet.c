#include<stdio.h>
int main()
{
    int arr[100], n , i;
    int valid = 1;

   printf("Enter a number of elements: ");
   scanf("%d" , &n);

   printf("Enter a array elements: ");
   for(i = 0; i < n; i++)
        {
            scanf("%d" , &arr[i]);
        }

    for(i = 0; i < n - 1; i++)
      {
        if(arr[i + 1] - arr[i] != 1)
         {
             valid = 0;
             break;
         }
      }

     if(valid == 1)

           printf("Valid sequences");
     else
          printf("Invalid sequences");

  return 0;
}
