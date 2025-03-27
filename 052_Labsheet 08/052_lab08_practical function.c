#include <stdio.h>

int square(int num){
    return num*num;
}

int main(){
    int number =10;
    int results = square(number);
    printf("The Square of %d is %d",number,results);
    return 0;
}

