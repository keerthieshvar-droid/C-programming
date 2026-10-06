#include <stdio.h>
struct Engine
{
    int engineNumber;
    float capacity;
};

struct Car
{
   char model[50];
   int year;
   float price;
   struct Engine engine;
};
int main()
{
    struct Car c;

    printf("Enter model: ");
    scanf("%s" , c.model);

    printf("Enter Year: ");
    scanf("%d" , &c.year);

    printf("Enter Price: ");
    scanf("%f" , &c.price);

    printf("Enter Engine Number: ");
    scanf("%d" , &c.engine.engineNumber);

    printf("Enter Engine Capacity: ");
    scanf("%f" , &c.engine.capacity);

   printf("\n--- Car Details ---\n");
   printf("Model : %s\n" , c.model);
   printf("Year : %d\n" , c.year);
   printf("Price : %.2f\n" , c.price);
   printf("Engine Number : %d\n" , c.engine.engineNumber);
   printf("Engine Capacity : %.2f\n" , c.engine.capacity);

 return 0;
}
