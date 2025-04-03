#include<stdio.h>
#include <ctype.h>
int main(){
    char input[10];

    printf("Enter Letters: \n");
    for(int i=0;i<10;i=i+1){
            scanf(" %c",&input[i]);

    }


    for (int i = 0; i < 10; i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            printf("%c is an UPPERCASE letter.\n", input[i]);
        }
        else if (input[i] >= 'a' && input[i] <= 'z') {
            printf("%c is a lowercase letter.\n", input[i]);
        }


    }return 0;

}
