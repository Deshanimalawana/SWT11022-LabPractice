#include <stdio.h>

int main(){
    int AccountBalance = 5000;
    int account_balance = 4500;
    int SecondTransaction = 200; //Invalid - Number in the variable name
    int transactionAmount = 150; //Invalid - Space in the variable name
    int floatA = 100; //Invalid - float is not a variable

    printf("Account Balance: %d\n", AccountBalance);
    printf("account balance: %d\n", account_balance);
    printf("Second Transaction: %d\n", SecondTransaction);
    printf("Value: %d\n", floatA);

    return 0;

}
