#include <stdio.h>
int main(){

    char str[20]= "XML";
    int i;

    printf("The reverse of %s is ", str);

    for(i=0; str[i] != '\0'; i++);



    for(i=i-1; i>=0; i--){
        printf("%c",str[i]);

    }


    printf("\n");
    return 0;

}
