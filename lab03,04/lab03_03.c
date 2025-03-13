#include <stdio.h>

int main() {
    int AccountBalance = 5000;  // Corrected (Camel case)
    int account_balance = 4500; // Valid
    int secondTransaction = 200; // Corrected (No numbers at the start)
    int transactionAmount = 150; // Corrected (No spaces)
    int floatNo = 100; // Corrected (Avoiding reserved keyword)

    // Display variable values
    printf("Account Balance : %d\n", AccountBalance);
    printf("account balance : %d\n", account_balance);
    printf("Second Transaction: %d\n", secondTransaction);
    printf("Transaction Amount: %d\n", transactionAmount);
    printf("Float no: %d\n", floatNo );

    return 0;
}
