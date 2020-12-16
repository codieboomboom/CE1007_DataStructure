#include <stdio.h>
#include <string.h>
struct account {
 struct
 {
 int i;
 char lastName[10];
 char firstName[10];
 } names;
 int accountNum;
 double balance;
};

void nextCustomer(struct account *acct);
void printCustomer(struct account acct);

int main()
{
 struct account record;
 int flag = 0;
 do {
 nextCustomer(&record);
 if ((strcmp(record.names.firstName, "End") == 0) &&
 (strcmp(record.names.lastName, "Customer") == 0))
 flag = 1;
 if (flag != 1)
 printCustomer(record);
 } while (flag != 1);
}
void nextCustomer(struct account *acct)
{
 /* Write your program code here */
 printf("Enter names (firstName lastName): \n");
 scanf("%s",acct->names.firstName);
 scanf("%s",acct->names.lastName); //firstname, last name just nice is address of string so the & is optional
 scanf("%d",&(acct->names.i)); //acct -> names will access to the names sub structure (by dereference) and then access i by call by value, hence to get address of i, we need "&"
 printf("%d",acct->names.i);
 if (strcmp(acct->names.firstName,"End")==0)
    return;
 printf("Enter account number: \n");
 scanf("%d",&(acct->accountNum));
 printf("Enter balance: \n");
 scanf("%lf",&(acct->balance));
}
void printCustomer(struct account acct)
{
 /* Write your program code here */
 printf("Customer record: \n");
 printf("%s %s %d %.2lf \n",acct.names.firstName,acct.names.lastName,acct.accountNum,acct.balance);
}
