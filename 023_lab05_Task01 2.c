#include <stdio.h>

int main()
{
    int a=7;
    printf("Enter a Number:");
    scanf("%d",&a);
    if(a%2){
         printf("The Number is odd\n");
    }
    else{
        printf("The Number is even\n");
    }
    return 0;
}
