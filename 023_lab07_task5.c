#include <stdio.h>

int main()
{
    int num;
    for(num=1; num<=20; num++){
            if (num%2==1){
                continue;
            }
        printf(" %d",num);

    }
    return 0;
}
