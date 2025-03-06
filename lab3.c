#include <stdio.h>

int main() {
    int AccountBalance = 5000;         // Valid
    int account_balance = 4500;        // Valid
    int secondTransaction = 200;       // i change name from "2ndTransaction"
    int transaction_Amount = 150;      // i change name from "transaction Amount"
    int floatAmount = 100;             // i change name from "float"

    // Printing variable values
    printf("Account Balance: %d\n", AccountBalance);
    printf("Account Balance (Alternative): %d\n", account_balance);
    printf("Second Transaction: %d\n", secondTransaction);
    printf("Transaction Amount: %d\n", transaction_Amount);
    printf("Float Amount: %d\n", floatAmount);

    return 0;
}
