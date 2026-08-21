#include<stdio.h>
int main()
{
    int rpm;
    int temp;

    printf("Enter a rpm: ");
    scanf("%d" , &rpm);

    printf("Enter a temperature: ");
    scanf("%d" , &temp);

   if(temp > 80){
      printf("Status : Overheat - Shutdown");
     }
   else if(rpm < 500){
      printf("Status : IDLE");
     }
   else if(rpm >= 50 && rpm <= 3000){
      printf("Status : Normal");
     }
    else{
          if(temp > 60){
             printf("Status : Overspeed - Caution");
           }
          else{
              printf("Status : Overspeed");
          }
     }

 return 0;
}

