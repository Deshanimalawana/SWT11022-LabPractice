#include <stdio.h>
int main(){
    float payrate;
    int hours;
    printf("Enter total worked hours: ");
    scanf("%d", &hours);
    printf("Enter pay rate: ");
    scanf("%f",&payrate);
    printf("Your pay Rate: %2f, Worked hours: %d\n",payrate,hours);
    return 0;
}
