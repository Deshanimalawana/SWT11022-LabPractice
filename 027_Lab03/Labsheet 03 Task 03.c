#include <stdio.h>

int main()
{
     //int AccountBalance = 5000; valid
     //int account_balance = 4500; valid
     //int 2ndTransaction = 200; invalid variable name cannot start with a number
     //int transaction Amount = 150; invalid variable name cannot have space
     //int float = 100; invalid can not use reserved words for variables

     int AccountBalance = 5000;
     int account_balance = 4500;
     int secondTransaction = 200;
     int transaction_Amount = 150;
     int Amount = 100;

     printf("AccountBalance:%d\n",AccountBalance);
     printf("account_balance:%d\n",account_balance);
     printf("secondTransaction:%d\n",secondTransaction);
     printf("transaction_Amount:%d\n",transaction_Amount);
     printf("Amount:%d\n",Amount);

     return 0;
}
