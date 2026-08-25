#include <stdio.h>

int main(){

           int a,b,c;

          printf("Enter three number:");
          scanf("%d %d %d" ,&a, &b, &c );
          

         if( a >= b)
           {
             if(a >= c)
                  printf("largest number = %d" , a);

            else
                  printf("largest number = %d" , c);
           }
           else
           {
              if(b >= c)
                  printf("largest number = %d" , b);

              else
                  printf("largest number = %d" , c);
           }

      return 0;
}
