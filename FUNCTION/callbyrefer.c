#include<stdio.h>

void swap(int *a,int *b)
{
      int temp;

      temp = *a;
      *a = *b;
      *b = temp;

}
  int main()
{
   int x , y;

   printf("Enter two numbers:");
   scanf("%d %d", &x,&y);

   printf("Before function call:\n");
   printf("a = %d,b = %d\n",x,y);

   swap(&x,&y);

   printf("After function call:\n");
   printf("a = %d,b = %d\n",x,y);

    return 0;
}
