#include <stdio.h>


int main()
{
    int num;
    while(1) {
    printf("Enter a number:");
    scanf("%d",&num);

        if(num<0){
            break;
        }
    }
    printf("This one is Negative Number");
    return 0;
}
