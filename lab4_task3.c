#include<stdio.h>
int main(){
//Diclare
    int x=12;
    int y=8;
//bitwise
    int and = x&y;
    int or = x|y;
    int xor = x^y;

    printf("AND : %d\n",and);
    printf("OR : %d\n",or);
    printf("XOR : %d\n\n",xor);



return 0;
}
