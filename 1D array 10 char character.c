#include <stdio.h>


int main()
{
    char x[10];
    char y[10];
    int i;
    printf("Enter 10 characters:\n");
    for(i=0; i<10; i++){
        scanf(" %c",&x[i]);
    }
    for(i=0; i<10; i++){
        y[i]=x[i];
    }
    printf("Original characters:\n");
    for(i=0;i<10; i++){
            printf(" %c\n",x[i]);

    }
    printf("Duplicate character:\n");
    for(i=0; i<10; i++){
        printf(" %c",y[i]);
    }
    return 0;
}
