#include<stdio.h>

int main() {



    int x=10, y=4;
    int isGreaterThan = (x>y);
    int isEqual =(x==y);
    int isNotEqual = (x!=y);

    printf("Is x greater thay y? %s\n", isGreaterThan? "yes":"no");
    printf("is x equal to y? %s\n", isEqual? "yes":"No");
    printf("is X not equal to y?%s\n", isNotEqual? "yes":"No");

    return 0;
}
