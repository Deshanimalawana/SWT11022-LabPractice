# include <stdio.h>
int main () {
    float payrate;
    int hours;
    float salary;

    printf("Enter total worked hours:");
    scanf("%d", &hours);
    printf("Enter pay rate:");
    scanf("%f", &payrate);
    salary=hours*payrate;
    printf("your pay rate:%.2f,worked hours:%d,salary:%.2f\n",payrate,hours,salary);
    return 0;
}
