#include<stdio.h>
int main(){
    int x=11;
    int y=45;

    int and=x&y;
    int or=x|y;
    int xor=x^y;

    printf("AND: %d\n",and);
    printf("OR : %d\n",or);
    printf("XOR: %d\n",xor);

    return 0;

}
