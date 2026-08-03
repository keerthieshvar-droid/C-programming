#include<stdio.h>
int maximum(int a, int b)
{
   if(a > b)
      return a;
    else
      return b;
}

int main()
{
     printf("%d\n" , maximum(15 , 10));

return 0;
}
