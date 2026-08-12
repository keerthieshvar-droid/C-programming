#include<stdio.h>
int main()
{
   int n,i;
   int arr[100];
   int invalid_count = 0;

  printf("Enter a number of readings:");
  scanf("%d", &n);

  printf("Enter a temperature readings:");
   for(i = 0; i < n; i++)
     {
       scanf("%d" , &arr[i]);
     }

  for(i = 0; i < n; i++)
    {
     if(arr[i] < 0 || arr[i] > 100){
       arr[i] = -1;
      invalid_count++;
   }
}

printf("Modified array\n");
for(i = 0; i < n; i++)
  {
    printf("%d\t",arr[i]);
  }

printf("Invalid count = %d\n" , invalid_count);

 return 0;

}
