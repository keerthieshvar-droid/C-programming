#include<stdio.h>
int main()
{
   int n,i,key;

   printf("Enter a number of elements:\n");
   scanf("%d" , &n);

   int arr[n];

   printf("Enter a array elements:\n");
   for(i = 0; i < n; i++){
      scanf("%d" , &arr[i]);
}

   printf("Enter a element search:");
      scanf("%d" , &key);

    for(i = 0; i < n; i++){
   if (arr[i] == key){
        printf("Enter found at index:%d\n" , i);
        return 0;
   }
}
    printf("Element not found\n");

    return 0;
}

