#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age=56;
    int income=57000;
    if(age>=60){
        if(income<60000){
            printf("Eligible fir tax deduction");
        }
        else {
            printf("Not eligible for tax dduction");
        }
    }
    else{
        printf("Not eligible for tax deduction");
    }

    return 0;
}
