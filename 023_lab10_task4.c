#include <stdio.h>
int main()
{
    char input[10];
    printf("Enter alphat letters one by one:\n");
    int i;
    for( i=0; i<10;i++){
        scanf(" %c", &input[i]);
    }
        for (i = 0; i < 10; i++) {
            if (input[i] >= 'A' && input[i] <= 'Z'){
                printf("%c is upercase\n",input[i]);}
            else{
                printf("%c is lowercase\n", input[i]);
            }
                }
    return 0;
}
