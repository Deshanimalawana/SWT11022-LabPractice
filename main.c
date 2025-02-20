#include <stdio.h>
#include <stdlib.h>

int main()
{ float payrate;
    int hours;
    printf("Enter total worked Hours;");
    scanf("%d", &hours);
    printf("Enter pay rate:");
    scanf("%f",&payrate);
    printf("\nYour pay rate:%.2f\nworked Hours:%d\n",payrate,hours);
    return 0;


}
