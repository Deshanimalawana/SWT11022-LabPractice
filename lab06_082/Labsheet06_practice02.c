#include<stdio.h>

int main( ){
    int dayofwork;

    printf("day of work:");
    scanf("%d",&dayofwork);

    switch(dayofwork){
        case 1:
            printf("monday\n");
        break;
        case 2:
            printf("tuesday\n");
        break;
        case 3:
            printf("wednesday\n");
        break;
        default:
            printf("other day\n");

    }

        return 0;
}
