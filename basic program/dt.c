#include <stdio.h>
int main(){

           int rollno;
           float grade;
           char mark;
           double percentage;

           printf("Enter Roll no: ");
           scanf("%d", &rollno);

           printf("Enter Grade: ");
           scanf("%f" , &grade);

           printf("Enter Mark: ");
           scanf("%c" , &mark);

           printf("Enter Percentage: ");
           scanf("%lf" , &percentage);


         printf("\nRoll No = %d" , rollno);
         printf("\nGrade = %.2f" , grade);
         printf("\nMark = %c" , mark);
         printf("\nPercentage = %.2lf" , percentage); 


     return 0;
}
