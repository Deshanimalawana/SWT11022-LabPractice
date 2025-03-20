#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    for (number = 0; number<20; number++){
        if(number%2==0){
            printf("%d\n", number);}
        else{
            continue;
        }
    }
    return 0;
}
