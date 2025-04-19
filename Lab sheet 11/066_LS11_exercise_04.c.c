#include <stdio.h>
int main() {
    int arry[10], unique[10], count = 0, duplicate;

    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++)
        scanf("%d", &arry[i]);

    for(int i = 0; i < 10; i++) {
        duplicate = 0;
        for(int j = 0; j < count; j++)
        {
            if(arry[i] == unique[j])
            {
                duplicate = 1;
                break;
            }
        }
        if(!duplicate)
        {
            unique[count] = arry[i];
            count++;
        }
    }

    printf("Unique values:\n");
    for(int i = 0; i < count; i++)
        printf("%d ", unique[i]);

    return 0;
}