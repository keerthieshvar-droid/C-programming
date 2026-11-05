#include <stdio.h>

int findMax(int *p, int n)
{
    int max = *p;
    int i;

    for(i = 1; i < n; i++)
    {
        if(*(p+i) > max)
        {
            max = *(p+i);
        }
    }

    return max;
}

int main()
{
    int arr[5] = {10, 50, 20, 80, 30};

    int result = findMax(arr, 5);

    printf("Maximum = %d", result);

    return 0;
}
