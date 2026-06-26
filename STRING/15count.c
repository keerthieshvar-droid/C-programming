#include <stdio.h>
int main(){

            int arr[] = {10,15,20,25,30,35};
            int n = sizeof(arr) / sizeof(arr[0]);
            int even = 0,odd =0;

            for(int i =0; i < n; i++){
                if(arr[i] % 2 == 0)
                  even++;
                else
                  odd++;
         }

             printf("Even number:%d\n", even);
             printf("Odd number :%d\n", odd);

         return 0;
}
