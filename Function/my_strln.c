#include<stdio.h>

int my_strlen(char str[])
{
   int i = 0;

   while(str[i] != '\0')
   {
       i++;
   }

    return i++;
}

int main()
{
   char str[100];
   int length;

   printf("Enter a string:");
   scanf("%s" , str);

   length = my_strlen(str);

   printf("String Length = %d" , length);

 return 0;
}
