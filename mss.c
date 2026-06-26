#include <stdio.h>

struct student 
{
              int rollno;
              char grade;
              float mark;
              double percentage;

};

int main()
{

      struct student s ;

      printf("Size of structure = %lu bytes\n", sizeof(s));

      return 0;
}
