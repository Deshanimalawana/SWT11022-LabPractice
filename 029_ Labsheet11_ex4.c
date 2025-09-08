#include <stdio.h>

    int main() {

        int array1[10];
        int array2[10];
        int unq_cnt = 0;
        int chkrepeat;

        printf("Enter 10 integer numbers:\n");
        for (int i = 0; i < 10; i++) {
            scanf("%d", &array1[i]);
        }
        for (int i = 0; i < 10; i++) {
            chkrepeat = 0;
            for (int c = 0; c < unq_cnt; c++) {
                if (array1[i] == array2[c]) {
                    chkrepeat = 1;
                    break;
                }
            }
            if (chkrepeat == 0) {
                array2[unq_cnt] = array1[i];
                unq_cnt++;
            }
        }
        if (unq_cnt < 10) {
            printf("\nUnique values array: ");
            for (int i = 0; i < unq_cnt; i++) {
                printf("%d ", array2[i]);
        }
        } else {
            printf("No repeated values.\n");
        }
    return 0;
}
