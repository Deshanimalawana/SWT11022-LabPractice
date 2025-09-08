#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alphabet [10];
    int i;

    printf("Enter the ten alphabets lower and upper:  ");
    for (i= 0; i<10; i++){
        scanf("%c", &alphabet[i]);
    }
    for (i=0; i<10; i++){

        if(alphabet[i]>='A' && alphabet[i]<= 'Z'){
            printf("The letter is Upper case :%c\n " ,alphabet[i]);
        }
        else if (alphabet[i]>='a' && alphabet[i]<='z'){
            printf("The letter is lower case: %c\n" ,alphabet[i]);
        }
        else {
            printf("There are no alphabet.\n",alphabet[i]);
        }
    }

    return 0;
}
