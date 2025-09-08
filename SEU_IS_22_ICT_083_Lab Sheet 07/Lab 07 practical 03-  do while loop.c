#include <stdio.h>
int main () {
    int num;
   do {
       printf("Enter a positive number: ");
       scanf("%d",&num);
    } while (num <=0);

    printf("You Entered a positive number: %d",num);

return 0;

}
