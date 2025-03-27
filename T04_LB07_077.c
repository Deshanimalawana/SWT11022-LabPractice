#include <stdio.h>
int main()
{
    int a;

    while (1)
        {
        printf("Enter a Negative Number: ");
        scanf("%d",&a);

        if (a < 0){
            break;
        }

        }
    printf("You Entered:%d\n",a);
return 0;
}
