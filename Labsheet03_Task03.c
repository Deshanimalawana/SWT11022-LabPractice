#include <stdio.h>
int main() {

   /*
     "Identifying he valid and Invalid Variables and explaning Why its invalid"
    int AccountBalance =5000; Valid
    int account_balance =4500; Valid
    int 2ndtransaction = 200; Invalid --> we can't use  number first in variable
    int transaction Amount =150; Invalid --> we can't use space in variable
    int float =100; Invalid --> we can't use Data type as a variable n */

    // Corrected Code
    int AccountBalance =5000;
    int account_balance =4500;
    int transaction2 = 200;
    int transaction_Amount =150;
    int number =100;

    printf("AccountBalance is:%d\n",AccountBalance);
    printf("account_balance is:%d\n",account_balance);
    printf("transaction2 is:%d\n",transaction2);
    printf("transaction_Amount is:%d\n",transaction_Amount);
    printf("number is:%d\n",number);


return 0;
}
