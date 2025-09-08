#include<stdio.h>
int main(){
    float payrate;
    int hours;
    printf("enter total worked hours: ");
    scanf("%d", &hours);
    printf("enter payrate: ");
    scanf("%f, &payrate");
    printf("your payrate: %.2f, worked hours: %d\n",payrate,hours);
    return 0;



}
