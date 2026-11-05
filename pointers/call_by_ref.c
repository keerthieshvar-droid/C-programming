#include <stdio.h>

void increment(int *p)
{
    (*p)++;
}

int main()
{
    int a = 10;

    printf("Before = %d\n", a);

    increment(&a);

    printf("After = %d\n", a);

    return 0;
}
