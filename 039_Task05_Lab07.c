#include <stdio.h>

int main(){
    for(int number = 0; number <= 20; number = number+1){
        if (number % 2 != 0) {
            continue;
        }
        printf("%d\n", number);
    }

}
