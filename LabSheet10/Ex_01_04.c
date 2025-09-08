#include<stdio.h>

int main(){

    int age[5]= {21 , 27 , 23 , 24 , 25};

    for (
         int i = 0;
         i < 5;
         i++
    ){
        printf("Student %d: %d Years Old\n", i + 1, age[i]);
    }

    return 0;
}
