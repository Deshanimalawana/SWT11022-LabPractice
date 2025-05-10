#include <stdio.h>

    int main() {

        float array1[10];
        float chk_num;
        int check = 0;
        int i;

        for (i = 0; i < 10; i++) {
            printf("Enter float number %d: ",i+1);
            scanf("%f", &array1[i]);
        }
        printf("\n\nEnter the float number to check: ");
        scanf("%f", &chk_num);

        for (i = 0; i < 10; i++) {
            if (array1[i] == chk_num) {
                check = 1;
                break;
            }
        }
        if (check) {
            printf("%.2f is in the array.\n", chk_num);
        } else {
            printf("%.2f is not in the array.\n", chk_num);
        }
    return 0;
}
