#include <stdio.h>
int main(){

           float mark1 , mark2 , mark3;
           float average;
           int avg_int;

         printf("Enter three numbers:");
         scanf("%f %f %f" , &mark1 , &mark2 , &mark3);
 
         average = ( mark1 + mark2 + mark3 ) / 3;
         avg_int = (int)average;

        printf("Average(Float) = %.2f\n" , average);
        printf("Average(Integer) = %d\n" , avg_int);

     return 0;
}


