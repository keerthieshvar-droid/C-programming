#include<stdio.h>
typedef void(*commandhandler)(void);
void ledon(void)
{
      printf("LED ON \n");
}
void ledoff(void)
{
     printf("LED OFF \n");
}
void reset(void)
{
     printf("RESET \n");
}
void status(void)
{
    printf("STATUS \n");
}
void dispatch(commandhandler table[],int tablesize, int cmdid)
{
    if(cmdid >=0&&cmdid<tablesize)
    {
           table[cmdid]();
    }
}
int main()
{
    int n;
    commandhandler table[] = {ledon,ledoff,reset,status};
    printf("LED ON \n");
    printf("LED OFF \n");
    printf("RESET \n");
    printf("STATUS \n");
    printf("Enter a choice: ");
    scanf("%d" , &n);
    dispatch(table,4,n);
return 0;
}
