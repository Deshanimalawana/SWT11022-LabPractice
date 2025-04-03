#include<stdio.h>
int main()
{
    char input[10];
    for(int i=0;i<=9; i++){
        printf("Enter a char %d:",i + 1);
        scanf("%s",&input[i]);


    }
    printf("char :");
    for(int i=0; i<=9; i++){
        printf("%c,",input[i]);
    }
    printf("\n");

     printf("\nCharacter Analysis:\n");
    for (int i = 0; i < 10; i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            printf("%c is an Uppercase letter\n", input[i]);
        } else if (input[i] >= 'a' && input[i] <= 'z') {
            printf("%c is a Lowercase letter\n", input[i]);
        } else {
            printf("%c is not an alphabet\n", input[i]);
        }
    }
    return 0;


}
