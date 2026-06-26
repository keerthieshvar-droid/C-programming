#include <stdio.h>
int main(){

            int arr[5] = {10,20,30,40,50};

            printf("Size of the entire array = %lu bytes\n" , sizeof(arr));
            printf("Size of one element = %lu bytes\n" , sizeof(arr[0]));

    return 0;
}
