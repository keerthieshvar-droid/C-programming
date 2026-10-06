#include<stdio.h>

struct Address
{
   char city[50];
   int pincode;
};
struct Student
{
     int id;
     char name[20];
     float marks;
     struct Address address;
};
int main()
{
   struct Student s;

   printf("Enter Student ID: ");
   scanf("%d" , &s.id);

   printf("Enter Student Name: ");
   scanf("%s" , s.name);

   printf("Enter Marks: ");
   scanf("%f" , &s.marks);

   printf("Enter City: ");
   scanf("%s" , s.address.city);

   printf("Enter Pincode: ");
   scanf("%d" , &s.address.pincode);


  printf("\n--- Student Details ---\n");
  printf("ID: %d\n" , s.id);
  printf("Name: %s\n" , s.name);
  printf("Marks: %.2f\n" , s.marks);
  printf("City: %s\n" , s.address.city);
  printf("Pincode: %d\n" , s.address.pincode);

  return 0;
}
