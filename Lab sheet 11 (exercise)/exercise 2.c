#include <stdio.h>
int main(){
    float a[11];
    printf("Enter 10 numbers = \n");
    for(int i=0; i<10; i++){
        scanf("%f",&a[i]);
    }

    printf("Display the Array = \n");
    for(int i=0; i<10; i++){
        printf("%.2f ",a[i]);
    }

    printf("\nEnter 1 Value Again = \n");
    scanf("%f",&a[10]);

    printf("\nAll elements of the Array = \n");
    for(int i=0; i<11; i++){
        printf("%.2f ",a[i]);
    }
    return 0;
}
