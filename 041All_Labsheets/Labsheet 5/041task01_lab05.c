#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);

    if (number % 2 == 0){
        printf("%d id a even number",number);
    }
    else{
        printf("%d is a odd number",number);
    }
    return 0;
}
