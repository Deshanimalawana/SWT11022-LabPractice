#include<stdio.h>
int main(){
    float payrate;
    int hours;

    printf("Enter total work hours:");
    scanf("%d", &hours);
    printf("Enter pay rate:");
    scanf("%f", &payrate);

    total=payrate*hours;
    printf("Total salary:%.2f\n",total);
    return 0;
    }
