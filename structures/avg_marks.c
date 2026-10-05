#include<stdio.h>

struct Student
{
    int id;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[5];
    int i;
    float total = 0, average;

  for(i = 0; i < 5; i++)
   {
     printf("\nEnter details of students%d\n", i + 1);

     printf("Enter ID: ");
     scanf("%d" , &s[i].id);

     printf("Enter Name: ");
     scanf("%s" , s[i].name);

     printf("Enter Marks: ");
     scanf("%f", &s[i].marks);

   total = total + s[i].marks;
}

   average = total / 5;

printf("\nTotal Marks : %.2f\n" , total);
printf("Average Marks : %.2f\n" , average);

  return 0;
}
