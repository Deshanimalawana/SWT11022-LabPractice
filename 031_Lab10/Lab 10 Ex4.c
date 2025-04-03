#include<stdio.h>

int main(){
    char Letter[10];

    for(int i = 0; i < 10; i++){
        printf("Enter a Letter %d : ",i + 1);
        scanf(" %c",&Letter[i]);
    }
    printf("\nLetters You Entered..\n");

    for(int i = 0; i < 10; i++){
        printf("%c ",Letter[i]);
    }

    for(int i = 0; i < 10; i++){
        if(Letter[i] >= 'A' && Letter[i] <= 'Z'){
            printf("\n%c is Uppercase Letter.", Letter[i]);
        }else if(Letter[i] >= 'a' && Letter[i] <= 'z'){
            printf("\n%c is Lowercase Letter.", Letter[i]);
        }else {
            printf("\n%c is not in the Alphabet.", Letter[i]);
        }
    }
    return 0;
}
