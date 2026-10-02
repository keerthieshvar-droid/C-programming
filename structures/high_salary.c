#include<stdio.h>
struct Employee
{
    int id;
    float salary;
    char department[50];
};

int main()
{
   struct Employee e[3];
   int i, highest;

   for(i = 0; i < 3; i++)
   {
      printf("\n Enter details of employee %d\n" , i + 1);

      printf("Enter ID: ");
      scanf("%d" , &e[i].id);

      printf("Enter Salary: ");
      scanf("%f" , &e[i].salary);

      printf("Enter Department: ");
      scanf("%s" , e[i].department);

}

  highest = 0;

   for(i = 1; i < 3; i++)
     {
         if(e[i].salary > e[highest].salary)
          {
            highest = i;
          }
     }

    printf("\n--- Employee with Highest Salary ---\n");
    printf("ID : %d\n" , e[highest].id);
    printf("Salary : %.2f\n" , e[highest].salary);
    printf("Department : %s\n" , e[highest].department);

  return 0;
}
