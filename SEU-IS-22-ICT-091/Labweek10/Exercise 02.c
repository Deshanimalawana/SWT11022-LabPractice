#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[6];
    int  total;
    float avg;

    for (int i=1; i<=6; i++){
        printf("enter the subject marks %d:", i);
        scanf("%d", &marks[i]);
    }

    for (int i=0; i<6; i++){
        total += marks[i];
    }

    avg = total / 6;
    printf("\nthe average is:%.1f ", avg);

    return 0;
}
