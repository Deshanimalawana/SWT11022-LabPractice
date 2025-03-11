#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num01, num02, num03;
    printf("Enter Number 01 : ");
    scanf("%d", &num01);
    printf("Enter Number 02 : ");
    scanf("%d", &num02);
    printf("Enter Number 03 : ");
    scanf("%d", &num03);

    if (num01<num02){
            if (num02<num03){
                printf("Largest Number is 3rd:%d", num03);
            }else {
                printf("largest Number is 2nd:%d", num02);
            }
    }else if (num01<num03){
        printf("Largest Number is 3rd:%d", num03);
        }else{
        printf("Largest Number is 1st:%d", num01);
        }

    return 0;
}
