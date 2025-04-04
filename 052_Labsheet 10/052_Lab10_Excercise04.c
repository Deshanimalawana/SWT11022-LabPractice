#include<stdio.h>
int main()
{
    char characters[10];
    printf ("Enter 10 Characters one by one : \n");



    for (int i=0; i<10; i++){
        printf("Enter character %d: " ,i);
        scanf("%s",&characters[i]);
    }
    for(int i=0; i<10; i++){
         if ( characters[i]>= 'A' && characters[i] <= 'Z') {
            printf("The %c is a Uppercase Alphabet\n", characters[i]);

        }else if ( characters[i] >= 'a' && characters[i] <= 'z') {
            printf("The %c is a Lowercase Alphabet\n", characters[i]);

        }else {
            printf("The %c is NOT an Alphabet\n", characters[i]);
        }
    }
    return 0;
}
