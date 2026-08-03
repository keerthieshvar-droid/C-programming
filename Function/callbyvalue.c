#include<stdio.h>
void swap(int x ,  int y)
{
     int temp = x;
     x = y;
     y = temp;
}
   int main()
{
     int a = 6;
     int b = 9;

   printf("%d%d\n" , a , b);
     swap(a , b);
   printf("%d%d\n" , a , b);

    return 0;
}
