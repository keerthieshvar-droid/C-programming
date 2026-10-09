#include<stdio.h>

int main(){
       int arr[100],i,n;
       int currentvalue, maxvalue;

   printf("Enter a number of elements: ");
   scanf("%d" , &n);

    printf("Enter the value of elements: ");

     for(i = 0; i < n; i++)
     {
        scanf("%d" , &arr[i]);
     }

      currentvalue = arr[0];
      maxvalue = arr[0];

     for(int i = 1; i < n; i++)
       {
         if(currentvalue + arr[i] > arr[i])
           {
              currentvalue += arr[i];
           }
         else
           {
               currentvalue = arr[i];
            }
      }

     if(currentvalue > maxvalue){
       maxvalue = currentvalue;
     }
       printf("Maxvalue: %d\n",maxvalue);

   return 0;
}
