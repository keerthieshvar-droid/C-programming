#include<stdio.h>

struct Student
{
    int id;
    char name[50];
    float marks;
};

int main()
{
   struct Student s[3];
   int i, search_id, found = 0;

    for(i = 0; i < 3; i++)
   {
      printf("\nEnter details of student %d\n" , i + 1);

   printf("Enter ID: ");
   scanf("%d" , &s[i].id);

   printf("Enter Name: ");
   scanf("%s" , s[i].name);

   printf("Enter Marks: ");
   scanf("%f" , &s[i].marks);

   }

   printf("\nEnter ID to search: ");
   scanf("%d" , &search_id);

  for(i = 0; i < 3; i++)
    {
        if(s[i].id == search_id)
        {
            printf("\n--- Student details ---\n");
            printf("ID : %d\n" , s[i].id);
            printf("Name : %s\n" , s[i].name);
            printf("Marks : %.2f\n" , s[i].marks);

       found == 1;
       break;
       }
   }

if(found == 0)
{
   printf("\nStudent not found\n");
}

 return 0;
}
