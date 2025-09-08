#include <stdio.h>

int main(void){
    // int AccountBalance = 5000; // Valid declaration for a variable
    // int account_balance = 4500; // Valid declaration for a variable
    // int 2ndTransaction = 200; // Invalid declaration for a variable because first character can not be a number
    // int transaction Amount = 150; // Invalid declaration for a variable because can not use spaces in midddle
    // int float = 100; // Invalid declaration for a variable because float is a reserved word

    //correct declarations
    int AccountBalance = 5000;
    int account_balance = 4500;
    int Transaction2nd = 200;
    int transactionAmount = 150;
    int float_var = 100;

    //printing variables
    printf("Account balance : %d\n", AccountBalance);
    printf("Other Account balance : %d\n", account_balance);
    printf("Second Transaction : %d\n", Transaction2nd);
    printf("Transaction amount : %d\n", transactionAmount);
    printf("Float Variable : %d\n", float_var);

    return 0;
}
