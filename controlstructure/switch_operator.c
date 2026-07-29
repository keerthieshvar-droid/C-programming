#include<stdio.h>
int main()
{
     float a,b;
     char op;

     printf("Enter two number:");
     scanf("%f%f" , &a , &b);

     printf("Enter operator(+,-,*,/):");
     scanf(" %c" , &op);

    switch(op)
    {
        case '+':
           printf("Result : %.2f" , a + b);
           break;

        case '-':
           printf("Result : %.2f" , a - b);
           break;

        case '*':
           printf("Result : %.2f" , a * b);
           break;

        case '/':
            if(b!= 0)
               printf("Result : %.2f" , a / b);
            else
                printf("Division by zero is not allowed.");
                break;

        default:
               printf("Invalid Operator");
}

return 0;
}
