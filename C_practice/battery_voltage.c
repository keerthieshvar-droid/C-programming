#include<stdio.h>

int main()
{
        float voltage;

       printf("Enter a voltage: ");
       scanf("%f" , &voltage);

    if(voltage < 3.0)
      {
         printf("Status : Under voltage\n");
     }
    else if(voltage <= 3.6)
     {
         printf("Status : Normal voltage\n");
     }
    else{

         printf("Status : High voltage\n");
  }

   return 0;
}

