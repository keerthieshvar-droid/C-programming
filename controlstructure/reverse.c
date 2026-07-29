#include <stdio.h>
int main()
{
    int n, rev =0, digit;
    printf("Enter the value of n:");
    scanf("%d" , &n);

   while (n > 0)
{
          digit = n % 10;
          rev = rev * 10 + digit;
          n = n / 10;

}

    printf("Reverse number : %d\n" , rev);

return 0;
}
