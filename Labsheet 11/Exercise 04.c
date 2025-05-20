#include <stdio.h>
int main() {
    int arr[10], unique[10], count = 0;
    for(int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 10; i++) {
        int isDuplicate = 0;
        for(int j = 0; j < count; j++) {
            if(arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate) {
            unique[count] = arr[i];
            count++;
        }
    }
    printf("Unique values: ");
    for(int i = 0; i < count; i++) {
        printf("%d ", unique[i]);
    }
    return 0;
}
