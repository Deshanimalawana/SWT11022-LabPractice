#include <stdio.h>
#include <stdlib.h>

int main()
{
    float abdul[10];
    float max;
    printf("enter 10 numbers:\n");

    for(int i=0;i<10;i++){
        scanf("%f",&abdul[i]);
    }
    max=abdul[0];
    for(int i=0;i<10;i++){
        if(max<abdul[i]){
            max=abdul[i];
        }
    }
    printf("max num is=%f",max);

    return 0;
}
