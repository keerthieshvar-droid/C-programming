#include<stdio.h>
int main()
{
    int n,i;
    int arr[100];
    int largest,second;

    printf("Enter a number of elements: ");
    scanf("%d" , &n);

    printf("Enter a elements: ");
    for(i = 2; i < n; i++)
     {
         scanf("%d" , &arr[i]);
     }

      largest = arr[0];
      second = arr[0];

    for(i = 2; i < n; i++)
        {
         if(arr[i] > largest)
           {
              second = largest;
              largest = arr[i];
            }

          else if(arr[i] > second && arr[i] != largest)
            {
                 second = arr[i];
            }
        }

  printf("Second Largest = %d" , second);

    return 0;
}
