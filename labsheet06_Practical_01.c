#include <stdio.h>
int main(){
    int age;
    float income;

    printf("Enter a Age:");
    scanf("%d",&age);

    printf("Enter a Income:");
    scanf("%d",&income);

    if (age>=60){
        if (income<60000.00){
            printf("You are eligible for a tax deduction.\n");
        }else{
            printf ("You are no eligible for a tex deduction.\n");
        }
    }else{
        printf ("you are not eligible for a tax deductio.\n");
    }
    return 0;
}
