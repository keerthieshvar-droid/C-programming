#include<stdio.h>
struct DOB
{
    int day;
    int month;
    int year;
};
struct Person
{
   char name[50];
   struct DOB dob;
};

int main()
{
    struct Person p;
     int age;

    printf("Enter name: ");
    scanf("%s" , p.name);

    printf("Enter Date of Birth(DD MM YYYY)");
    scanf("%d %d %d" , &p.dob.day,  &p.dob.month, &p.dob.year);

    age = 2026 - p.dob.year;

    printf("\n--- Person Details ---\n");
    printf("Name : %s\n" , p.name);

    printf("DOB : %02d/%02d/%04d\n", p.dob.day, p.dob.month, p.dob.year);
    printf("Age : %d years\n" , age);

  return 0;
}
