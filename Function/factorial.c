#include<stdio.h>
void factorial(int);

int main()
{
     int num;

     printf("Enter a positive number to find Factorial\n");
     scanf("%d" , &num);

     factorial(num);


return 0;
}

void factorial(int num){

    int i , fact = 1;

    if(num == 0)
{
     printf("Factorial is 0 is 1 (!0)");
}
    else
{
           for(i = 1; i <= num; i++)
          {
          fact = fact * i;
          }

     printf("\nFactorial of %d is %d\n" , num , fact);
  }
}
