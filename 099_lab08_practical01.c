#include <stdio.h>
int square (int num){
    return num * num;
}

int main()
{
    int number = 5;
    int result = square(number);
    printf("The square of %d is %d\n",number,result);
    return 0;
}
