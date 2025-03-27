#include <stdio.h>
int main()
{int number;
   printf("Enter a number: ");
    scanf("%d" , &number);
    if (number %2 == 0){
        printf("the number is even.\n");
    }else{ printf("the number is odd"); }

    return 0;
}
