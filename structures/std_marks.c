#include<stdio.h>
struct Student
{
  int id;
  char name[50];
  float marks;
};

int main()
{
  struct Student s[5], temp;
  int i,j;

  for(i = 0; i < 5; i++)
 {
    printf("\nEnter Details of student %d\n", i+1);

    printf("Enter ID: ");
    scanf("%d" , &s[i].id);

   printf("Enter Name: ");
    scanf("%s" , s[i].name);

   printf("Enter Marks: ");
   scanf("%f" , &s[i].marks);
}
   for(i = 0; i< 5 - 1; i++)
   {
     for(j = 0; j < 5-i-1; j++)
     {
       if(s[j].marks < s[j + 1].marks)
        {
          temp = s[j];
          s[j] = s[j + 1];
          s[j + 1] = temp;
        }
     }
  }

  printf("\n--- Student sorted by marks ---\n");

  for(i = 0; i < 5; i++)
   {
      printf("\nID : %d\n" , s[i].id);
      printf("Name : %s\n" , s[i].name);
      printf("Marks : %.2f\n" , s[i].marks);
   }

 return 0;
}

