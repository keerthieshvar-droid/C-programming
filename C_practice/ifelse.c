  #include <stdio.h>
int main()
{
   float num;

    printf("Enter a number :");
    scanf("%f" , &num);

    if(num > 0)
{
   printf("Positive number : %.2f\n", num);
}
    else if(num < 0)
{
   printf("Negative number : %.2f\n" , num);
}
   else(num == 0);
{
    printf("Zero : %.2f\n" ,  num);
}

return 0;
}
