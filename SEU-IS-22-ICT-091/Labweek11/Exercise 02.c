#include<stdio.h>

int main (){
    float arr[10], a;
    int i, b=0;

    printf("Enter 10 Decimal numbers :\n");
    for (i=0; i<10; i++){
        scanf("%f", &arr[i]);
    }

    printf("Enter a Decimal numbers :\n");
    scanf("%f",&a);


    for (i=0; i<10; i++){
            if (arr[i] == a){
                b=1;
                break;
            }
    }

    if(b==1){
        printf("Number is present on array");
    }else {
        printf("Number is Not present on array");
    }

    return 0;
}
