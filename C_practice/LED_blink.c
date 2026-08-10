#include<stdio.h>
int main()
{
     int n, i;
     int on_count;

     printf("Enter a number of blinks: ");
     scanf("%d" , &n);

     for(i = 1; i <= n; i++)
{

    if(i % 2 != 0){
        printf("Blink %d : LED ON\n", i);
        on_count++;
     }
    else{
       printf("Blink %d : LED OFF\n", i);
    }
}

printf("Total ON_COUNT : %d\n" , on_count);


  return 0;
}
