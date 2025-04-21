#include <stdio.h>

int main() {
    int numbers[10];
    int unique[10];
    int uniqueCount = 0;

    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    for(int i = 0; i < 10; i++) {
        int isDuplicate = 0;


        for(int j = 0; j < uniqueCount; j++) {
            if(numbers[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }


        if(!isDuplicate) {
            unique[uniqueCount] = numbers[i];
            uniqueCount++;
        }
    }

    if(uniqueCount == 10) {
        printf("All values are unique.\n");
    } else {
        printf("Duplicate values found.\n");
        printf("Unique values: ");
        for(int i = 0; i < uniqueCount; i++) {
            printf("%d ", unique[i]);
        }
    }

    return 0;
}
