#include<stdio.h>

int main(){

     int i,length = 0,flag = 1;
     char str[50];

      printf("Enter a string: ");
      scanf("%s",str);

       while(str[length] != '\0')
{

          length++;
}
   for(i = 0; i < length / 2; i++){
        if(str[i] != str[length-i-1])
         {
              flag = 0;
              break;
         }
    }

     if(flag == 1){
              printf("yes\n");
                  }
     else{
              printf("no\n");
         }
  return 0;
}
