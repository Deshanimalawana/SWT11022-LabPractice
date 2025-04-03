#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num[10];
    float maximum;

    for (int i=1; i<=10; i++){
        printf("enter the student %d marks :", i);
        scanf("%f", &num[i]);
    }

    maximum = num[0];
    for (int i=1; i<10; i++){
        if (num[i] > maximum){
            maximum = num[i];
        }

    }
    printf("\nmaximum mark is: %.1f", maximum);

    return 0;
}
