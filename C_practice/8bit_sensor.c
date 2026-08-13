#include<stdio.h>

int main()
{
    int arr[100],n,i,temp;
    int bitcount, evenParityCount = 0;

    printf("Enter a number of elements:");
    scanf("%d" , &n);

    printf("Enter a array elements:");
    for(i = 0; i < n; i++)
    {
      scanf("%d" , &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        temp = arr[i];
        bitcount = 0;
    }
    for(;temp > 0; temp = temp / 2)
      {
          if(temp % 2 == 1)
            {
         bitcount++;
            }
     }

 if(bitcount % 2 == 0)
   {
      evenParityCount++;
    }

 printf("Even Parity Count = %d" , evenParityCount);

  return 0;
}
