#include<stdio.h>
int main()

{

    int age=55;
    float income=50000.0;
    if (age>=60){
            if(income<60000){
                printf("You are eligible for tex detection");
            }else{
            printf("you are no eligible for tex detection");
            }
    }else{
        printf("you are no  eligible for tax detection");
        }

    return 0;
}
