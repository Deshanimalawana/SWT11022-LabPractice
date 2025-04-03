#include <stdio.h>
#include <ctype.h>
int main(){
    char character[10];

    printf("Enter 10 characters:\n");
    for (int i=0;i<10;i++){
        printf("Enter character %d: ",i+1);
        scanf(" %c", &character[i]);
    }
    printf("\nCharacter case:\n");
    for (int i=0;i<10;i++){
        if(islower(character[i])){
            printf("'%c' is lowercase.\n", character[i]);

        }else if(isupper(character[i])){
            printf("'%c' is uppercase.\n", character[i]);
        }else{
            printf("'%c' is not alphabet.\n", character[i]);
        }
    }
    return 0;
}
