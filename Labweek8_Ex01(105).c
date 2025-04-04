#include <stdio.h>

int isprime(int num){
        for(int i=2;i<num;i++){

        if(num%i != 0)
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}


int main (){

    int number = 8;
    if(isprime(number)) {
        printf("%d is a prime number.\n",number);
    }
    else{
        printf("%d is not a prime number.\n",number);
    }
    return 0;
}
