#include <stdio.h>

int main(){

            float principle, rate;
            int time , i;
            float amount;

            printf("Enter Principle Amount: ");
            scanf("%f" , &principle);

            printf("Enter Rate of Interest (in %%): ");
            scanf("%f" , &rate);

            printf("Enter Time(in years): ");
            scanf("%d" , &time);

            amount = principle;

            for(i = 1; i <= time; i++);
{
           amount += amount * rate / 100;
}

          printf("Compound Amount = %.2f\n" , amount);
          printf("Compound Interest = %.2f\n" , amount - principle);

       return 0;
}
