#include<stdio.h>
int main()
{
       int arr[10],largest,i;

       printf("Enter 10 integer:");

       for(i = 0; i < 10; i++)
{
       scanf("%d", &arr[i]);
         largest = arr[i];
}

  for(i = 1; i < 10; i++)
{
      if(arr[i] > largest)
         largest = arr[i];
}

      printf("Largest element : %d\n" , largest);


   return 0;
}
