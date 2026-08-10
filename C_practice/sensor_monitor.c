#include<stdio.h>
int main()
{
        int n, i, values;
         int failures = 0;

         printf("Enter a number of readings: ");
         scanf("%d" , &n);

      for(i = 0; i < n; i++){
           printf("Enter readings %d: ", i);
           scanf("%d" , &values);

    if(values <= 80){
          printf("Readings %d = %d : PASS\n" , i, values);
    }
   else{
         printf("Readings %d = %d : FAILURES\n" , i, values);
         failures++;
    }
}

  printf("Total failures : %d\n" , failures);

 return 0;
}

