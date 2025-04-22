#include<stdio.h>
int main()
{
    int numbers[10],unique[10];
    int i, j, isDuplicate, uniqueCount = 0;
    printf("Enter 10 Numbers: \n");

    for (i =0; i<10;i++){
        scanf("%d",&numbers[i]);
    }

    for (i = 0; i < 10; i++) {
        isDuplicate = 0;

        for (j = 0; j < uniqueCount; j++) {
            if (numbers[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unique[uniqueCount] = numbers[i];
            uniqueCount++;
        }
    }

    printf("\nOriginal array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\nUnique values: ");
    for (i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }

    return 0;


}
