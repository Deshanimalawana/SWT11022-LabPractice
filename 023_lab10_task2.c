#include <stdio.h>
#include <stdlib.h>

int main()
{
    float marks[6];
    float avarage[1];
    printf("enter marks:\n");
    int i;

    for(i=0;i<6;i++){
        scanf("%f",&marks[i]);
        float total= total+ marks[i];
        avarage[0]=total/6;
    }

        printf("marks are:");
                for(i=0;i<6;i++){
        printf(",%.2f",marks[i]);
    }
    printf("\navarge mark is=%.2f",avarage[0]);

    return 0;
}
