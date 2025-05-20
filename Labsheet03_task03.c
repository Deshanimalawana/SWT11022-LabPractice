#include <stdio.h>

int main() {
    int AccountBalance = 5000;
    int account_balance = 4500;
    int secondTransaction = 200;  // Fixed: variable name changed from 2ndTransaction
    int transactionAmount = 150;  // Fixed: removed space between transaction and Amount
    int floatValue = 100;         // Fixed: variable name changed from float to floatValue

    // Print the values of the variables
    printf("AccountBalance: %d\n", AccountBalance);
    printf("account_balance: %d\n", account_balance);
    printf("secondTransaction: %d\n", secondTransaction);
    printf("transactionAmount: %d\n", transactionAmount);
    printf("floatValue: %d\n", floatValue);

    return 0;
}
