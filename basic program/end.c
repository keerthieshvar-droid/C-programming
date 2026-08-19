#include <stdio.h>
int main(){
 
           int a , b;
           printf("Enter two number: ");
           scanf("%d%d" , &a , &b);

          if((a + b > 10)&&(a != b)){
             printf("Condition is True\n");
         }else{
             printf("Condition is False\n");
         }

        
         printf("Sum = %d\n" , a + b);
         printf("Difference = %d\n" , a - b);
         printf("Mulitiply = %d\n" , a * b);
         printf("Division = %d\n" , a / b);
         printf("Modulus = %d\n" , a % b);

     return 0;

} 
