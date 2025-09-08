#include <stdio.h>
int main() {
    int num[10], i, j, count=0;
    int duplicateArray[10]={}, uniqueArray[10];
    int l = sizeof(num)/sizeof(num[0]);
    printf("Enter the ten numbers: ");
    for(i=0; i<l; i++){
        scanf("%d", &num[i]);
    }
    for(i=0; i<l; i++){
        int duplicate = 0;
        for(j=i+1; j<l; j++){
            if(num[i] == num[j]){
                duplicate = 1;
                duplicateArray[j] = 1;
            }
        }
        if(!duplicateArray[i] && !duplicate){
            uniqueArray[count++] = num[i];
        }
    }
    printf("Original Array\n");
    for(i=0; i<l; i++){
        printf("%d ", num[i]);
    }
    printf("\nUnique Array\n");
    for(i=0; i<count; i++){
        printf("%d ", uniqueArray[i]);
    }

    return 0;
}
