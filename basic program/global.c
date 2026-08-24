#include <stdio.h>

 int globalVar = 50;
    void display()
{
          printf("Inside function: global variable = %d\n", globalVar);
}
int main()
{ 
         printf("Inside function : global variable = %d\n" , globalVar);
         display();

          globalVar = globalVar + 10;

         printf("After modification : global variable = %d\n" , globalVar);

    return 0; 
}
