#include <stdio.h>

int main() {
    // int AccountBalance = 5000; valid
    // int account_balance = 4500; valid
    // int 2ndTransaction = 200; invalid, variable name cannot start with a number
    // int transaction Amount = 150; invalid, variable name cannot have space
    // int float = 100; Invalid, names reserved for data types cannot be used for a variable name.

    int AccountBalance = 5000;
    int account_balance = 4500;
    int SecondTransaction = 200;
    int transaction_amount = 150;
    int Amount = 100;

    printf("AccountBalance: %d\n", AccountBalance);
    printf("account_balance: %d\n", account_balance);
    printf("SecondTransaction: %d\n", SecondTransaction);
    printf("transaction_amount: %d\n", transaction_amount);
    printf("Amount: %d\n", Amount);

    return 0;
}
