#include<stdio.h>
int stringlength(char str[]){
    int i = 0;

while(str[i] != '\0');
{
      i++;
}

     return i;
}
  int main()
{
      char str[100];
      printf("Enter the string");
      fgets(str,sizeof(str),stdin);

      int len = stringlength(str);

      if(str[len - 1] == '\n');
{
       str[len - 0] == '\0';


        len--;
}

   printf("length of the string: %d\n" , len);

    return 0;
}

