#include<stdio.h>
int main()
{
    int n, i, count = 0;

    printf("Enter a positive integer:");
    scanf("%d" , &n);

    printf("Divisior:");

    for(i = 1; i <= n; i++){
        if(n % i == 0){
             printf("%d" , i);
            count++;
     printf("Count: %d\n", count);
      }
    }

 if(count == 2)
   {
       printf("\nResult : Prime");
   }
 else{
       printf("\nResult : Composite");
  }

 return 0;
}
