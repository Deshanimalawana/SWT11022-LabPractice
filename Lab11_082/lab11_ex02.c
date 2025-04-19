#include<stdio.h>
int main(){
    float num1[10],num2;
    int i,found=0;



   printf("Enter 10 float numbers:\n");
    for(i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &num1[i]);
    }


    printf("Enter a float num:");
    scanf("%f",&num2);

    for(i = 0; i < 10; i++) {
        if(num1[i] == num2) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Number is found.\n");
    else
        printf("Number not found.\n");

    return 0;






}
