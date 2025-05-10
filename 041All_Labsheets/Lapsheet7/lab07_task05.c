#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    for (number = 1; number<20; number++){
        if(number%2==1){
            continue;}
        else{
            printf("%d\n", number);
        }
    }
    return 0;
}
