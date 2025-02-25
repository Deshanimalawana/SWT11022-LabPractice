#include <stdio.h>
int main(){
    int hours;
    float payrate;
    float salary;
    printf("Enter total worked hours");
    scanf("%d", &hours);
    printf("Enter pay rate");
    scanf("%f", &payrate);
    salary=hours*payrate;
    printf("salary:%f",salary);
    return 0;
}
