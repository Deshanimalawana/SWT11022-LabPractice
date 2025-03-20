#include <stdio.h>

int main()
{
    int number;
    for(number=1; number<=20; number++){
            if (number%2!=0){
                continue;
            }
        printf(" %d",number);

    }
    return 0;
}
