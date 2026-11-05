#include <stdio.h>

void display(int *p, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    display(arr, 5);

    return 0;
}
