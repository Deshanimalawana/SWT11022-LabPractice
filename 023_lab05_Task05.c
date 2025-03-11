#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Number:");
    scanf("%d",&a);
    if (a>0){
        printf("The Number is positive\n");
    }
    else if(a<0){
        printf("The Number is negative\n");
    }
    else{
        printf("The Number is ZERO\n");
    }

    return 0;
}
