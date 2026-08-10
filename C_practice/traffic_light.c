#include<stdio.h>
int main()
{
      int state;

     printf("Enter state (0 = RED, 1 = YELLOW, 2 = GREEN): ");
     scanf("%d" , &state);

    switch(state)
      {
         case 0:
               printf("RED : (stop for 10 seconds)\n");
               break;

        case 1:
              printf("YELLOW : (wait for 3 seconds)\n");
              break;

        case 2:
              printf("GREEN : (go for 5 seconds)\n");
              break;

      default:
              printf("Invalid state\n");
      }

  return 0;
}
