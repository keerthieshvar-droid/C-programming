#include<stdio.h>
struct BankAccount
{
    int accountNumber;
    char name[50];
    float balance;
};

void deposit(struct BankAccount *a , float amount)
{
    a->balance = a->balance + amount;
}
void withdraw(struct BankAccount *a, float amount)
{
   if(amount <= a->balance)
    {
      a->balance = a->balance - amount;
    }
   else
    {
      printf("Insufficient Balance!\n");
    }
}
void displayBalance(struct BankAccount a)
{
   printf("\nCurrent Balance: %.2f\n", a.balance);
}

int main()
{
   struct BankAccount a;
   float amount;

  printf("Enter Account Number: ");
  scanf("%d" , &a.accountNumber);

 printf("Enter Name: ");
 scanf("%s" , a.name);

  printf("Enter Initial Balance: ");
  scanf("%f" , &a.balance);

  printf("\nEnter deposit amount: ");
  scanf("%f" , &amount);
   deposit(&a, amount);

  printf("After Deposit: ");
  displayBalance;

  printf("\nEnter withdrawal amount: ");
   scanf("%f" , &amount);
   withdraw(&a, amount);

  printf("After Withdrawal: ");
  displayBalance(a);

 return 0;
}
