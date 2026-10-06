#include<stdio.h>

struct Student
{
    int id;
    float marks;
};

   void modifyValue(struct Student s)
{
      s.id  = 100;
      s.marks = 98.9;
}

   void modifyPointer(struct Student *s)
{
      s->id = 85;
      s->marks = 90.2;
}

int main()
{
    struct Student s;

    s.id = 10;
    s.marks = 75.5;

   printf("Before modification:\n");
   printf("ID : %d\n" , s.id);
   printf("Marks : %.2f\n" , s.marks);

    modifyValue(s);

   printf("\nAfter pass by value\n");
   printf("ID : %d\n" , s.id);
   printf("Marks : %.2f\n" , s.marks);

    modifyPointer(&s);

   printf("\nAfter pass by pointer\n");
   printf("ID : %d\n" , s.id);
   printf("Marks : %.2f\n" , s.marks);

 return 0;
}
