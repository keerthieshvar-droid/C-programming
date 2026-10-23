#include<stdio.h>
#include<string.h>

void sortword(char *words[], int n)
{
      int i,j;
      char *temp;

      for(i = 0; i < n-1; i++)
      {
       for(j = 0; j < n-1-i; j++)
        {
          if(strcmp(words [j], words[j+1]))
          {
              temp = words[j];
              words[j] = words[j+1];
              words[j+1] = temp;
          }
       }
    }
}
int main()
{
    int i, n;
    char name[10];
    char word[10][50];
    printf("Enter the numbers of elements: ");
    scanf("%d" , &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
       scanf("%s" , word[i]);
       name[i] = word[i];
   }

   sortword(name,n);
   printf("After Sorting: ");
   for(i = 0; i < n; i++)
   {
        printf("%s\t", name[i]);
   }
    printf("\n");
   return 0;
}
