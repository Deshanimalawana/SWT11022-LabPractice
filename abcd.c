#include <stdio.h>
int main(){
    float payRate;
    int hours;
    printf("Enter total worked hours:");
    scanf("%d",&hours);
    printf("Enter pay rate:");
    scanf("f",&payRate);
    printf("your pay Rate:%.2f,worked Hours:%d\n" ,payRate,hours);
    return 0;

}
