#include <stdio.h>
int main(){
    float payrate;
    int hours;
    float salary;
    printf("Enter total worked hours:");
    scanf("%d" ,&hours);
    printf("Enter pay rate:");
    scanf("%f" ,&payrate);
    salary=hours*payrate;
    printf("salary:%f",salary);
    return 0;
}
