#include <stdio.h>

int main() {
    int num[10], uniqueNum[10];
    int i, j, isDuplicate, uniqueCount = 0;


    printf("Enter 10 integer values: \n");
    for(i = 0; i < 10; i++) {
        printf("enter value:");
        scanf("%d", &num[i]);
    }


    for(i = 0; i < 10; i++) {
        isDuplicate = 0;
        for(j = 0; j < uniqueCount; j++) {
            if(num[i] == uniqueNum[j]) {
                isDuplicate = 1;
                break;
            }
        }


        if(!isDuplicate) {
            uniqueNum[uniqueCount] = num[i];
            uniqueCount++;
        }
    }


    printf("\nUnique values are:\n");
    for(i = 0; i < uniqueCount; i++) {
        printf("%d ", uniqueNum[i]);
    }

    return 0;

}
