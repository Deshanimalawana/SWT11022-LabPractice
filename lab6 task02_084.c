#include <stdio.h>
int main(){

    int age=60;
    float income=50000;



    if(age>=60){
            if(income<60000){
                    printf("Eligible for tax deduction\n");
            }else{
                printf("Not Eligible for tax deduction\n ");
            }
    }else{
         printf("Not Eligible for tax deduction\n ");
    }
    return 0;
}
