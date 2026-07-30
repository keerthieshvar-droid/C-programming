#include<stdio.h>
int main()
{
    int arr[100],n,i;
    int even = 0, odd = 0;

    printf("Enter a number of elements:\n");
    scanf("%d" ,&n);

    printf("Enter a array elements:\n");
    for(i = 0; i < n; i++)
{
     scanf("%d" , &arr[i]);
}

    for(i = 0; i < n; i++)
{
     if(arr[i] % 2 == 0)

        even++;
     else
        odd++;
}

     printf("Enter a even elements : %d\n" , even);
     printf("Enter a odd elements : %d\n" , odd);

 return 0;
}
