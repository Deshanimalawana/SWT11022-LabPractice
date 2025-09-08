#include <stdio.h>
#include <ctype.h>


int main()
{
    char inputs;
    int i;
    for(i=0; i<10; i++){
        printf("Enter character %d: ",i+1);
        scanf(" %c",&inputs);

        if(isalpha(inputs)){
            if(islower(inputs)){
                printf("%c:is a lowercase alphabet.\n",inputs);
            }
            else{
                printf("%c:is a uppercase alphabet.\n",inputs);
            }
        }
            else{
                printf("%c:isn't an alphabet.\n",inputs);
            }
        }

    return 0;
}
