#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Ocharacter[10] = {'P', 'h', 'a', 'b', 'h', 'a', 't', 'h', 'n', 'i'};
    char dcharacter[10];

    for(int i=0; i<10; i++){
        dcharacter[i] = Ocharacter[i];
    }
    printf("Original Array.\n");
    for (int i=0; i<10; i++){
        printf("%c ", Ocharacter[i]);
    }
    printf("\nDuplicated Array.\n");
    for(int i=0; i<10; i++){
        printf("%c" , dcharacter[i]);
    }
    return 0;
}
