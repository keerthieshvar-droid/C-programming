#include<stdio.h>

void removeDuplicate(char stra[])
{
     int seen[26]={0};
     int i,j=0;

    for(i = 0; stra[i]!= '\0'; i++)
    {
        if(seen[stra[i]-'a']==0)
        {
          seen[stra[i]-'a']=1;
           stra[j] = stra[i];
            j++;
        }
   }

   stra[j]='\0';
}
int main()
{
      char str[100];
      printf("Enter the string:");
      scanf("%s", str);

      removeDuplicate(str);

      printf("Remove Duplicate: %s\n",str);
      return 0;
}
