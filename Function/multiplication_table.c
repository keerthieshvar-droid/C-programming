#include<stdio.h>
void table(int n)
{
   int i;

   for(i = 0; i <= 10; i++){

  printf("%d x %d = %d\n", n ,i , n * i);
 }
}

int main()
{
     int num;
    printf("Enter a numbers:");
    scanf("%d",&num);

    table(num);

   return 0;
}
