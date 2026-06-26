#include <stdio.h>
int main(){

            int arr[] = {11,47,8,29,30};
            int n = sizeof(arr) / sizeof(arr[0]);
            int largest,secondLargest,i;

            largest = secondLargest = arr[0];

            for(i = 1; i < n; i++){
               if(arr[i] > largest)
                  largest = arr[i];

           }

             for(i = 0; i < n; i++){
               if(arr[i] > secondLargest && arr[i] < largest)
                 secondLargest = arr[i];
     }

         printf("Largest element = %d\n" , largest);
         printf("SecondLargest element = %d\n" , secondLargest);

      return 0;
}
