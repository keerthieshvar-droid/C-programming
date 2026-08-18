#include <stdio.h>
#define PI 3.14

int main(){

            int radius;
            float area;
            char unit;

           printf("Enter radius of circle:");
           scanf("%d" , &radius);

           printf("Enter unit of measurement (eg., c for cm):");
           scanf("%c" , &unit);
 
          area = PI* (float)(radius * radius);
       
          printf("Size of float variable:  %lu byte\n" , sizeof(area));

         if (area > 0){
             printf("Area = %.2f%c%c\n" , area , unit , 178);
         }else{
             printf("Invalid radius entered.\n");
         }


          return 0 ;
}
