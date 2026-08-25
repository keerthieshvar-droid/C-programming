#include <stdio.h>
int globalVar = 100;

void display()

{
             static int staticVar = 30;
             int localVar = 10;

              localVar++;
              staticVar++;

          printf("Local Variable = %d\n" , localVar);
          printf("Global Variable = %d\n" , globalVar);
          printf("Static Variable = %d\n" , staticVar);
}

int main()
{

          printf("First Function Call :\n");
          display();

          printf("Second Function Call :\n");
          display();

     return 0;
}
