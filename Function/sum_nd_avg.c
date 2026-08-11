#include<stdio.h>

void calculate(int arr[], int n, int *sum, float *average)
{
   int i;

   *sum = 0;

    for(i = 0; i < n; i++)
     {
         *sum = *sum + arr[i];
     }

    *average = (float)*sum / n;
}

int main()
{
      int arr[100] , n , i;
      int sum;
      float average;

     printf("Enter a number of elements:");
     scanf("%d" , &n);

     printf("Enter array elements:");

     for(i = 0; i < n; i++)
      {
         scanf("%d" , &arr[i]);
      }

        calculate(arr, n, &sum, &average);

     printf("Sum = %d\n" , sum);
     printf("Average = %.2f" , average);

  return 0;
}
