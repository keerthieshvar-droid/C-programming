#include<stdio.h>
struct Student
{
    int id;
    char name[20];
    float marks;
};

int main()
{
     struct Student s;

     printf("Enter student ID: ");
     scanf("%d" , &s.id);

     printf("Enter student Name: ");
     scanf("%s" , s.name);

     printf("Enter student Marks: ");
     scanf("%f" , &s.marks);

     printf("\nStudent Details\n");
     printf("ID : %d\n" , s.id);
     printf("Name : %s\n" , s.name);
     printf("Marks : %.2f\n" ,s.marks);

return 0;
}
