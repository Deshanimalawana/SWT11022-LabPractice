#include <stdio.h>
int main(){
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0 ; ; i++){
        printf("%c\n",alphabet[i]);
        if (alphabet[-1] == alphabet[i]){
            break;
        };
    }
    return 0;
}
