
#include <stdio.h>
int main(){
    float payrate;
    int hours;
    printf("Enter total worked hours: ");
    scanf("%d", &hours);
    printf("Enter pay rate: ");
    scanf("%f", &payrate);
    float salary=hours*payrate;
    printf("Your salary is: %.2f\n",salary);

    return 0;

}
