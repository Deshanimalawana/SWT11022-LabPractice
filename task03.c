
/*
1)
1. int AccountBalance = 5000; = valid
2. int account_balance = 4500; = valid
3. int 2ndTransaction = 200; = invalid
4. int transaction Amount = 150; = invalid
5. int float = 100; = invalid

2)
3. variable name can not start using numbers.
4. there is a space between that two words,variable can not get when there is space.
5. we can not use key word as a variable name.


3)
*/
#include<stdio.h>
int main(){

    int AccountBalance = 5000;
    int account_balance = 4500;
    int Transaction = 200;
    int transaction_Amount = 150;
    int balance = 100;

    printf("%d\n",AccountBalance);
    printf("%d\n",account_balance);
    printf("%d\n",Transaction);
    printf("%d\n",transaction_Amount);
    printf("%d\n",balance);
    return 0;








}
