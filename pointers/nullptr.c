#include <stdio.h>

int main()
{
      int *ptr = NULL;

      if(ptr == NULL)
{
      printf("Pointer is NULL. No memory address assigned.\n");
}
else
{
   printf("Value: %d\n" , *ptr);
}

  return 0;
}
