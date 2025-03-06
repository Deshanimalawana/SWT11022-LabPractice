#include <stdio.h>

int main(){
    int x=10, y=4;
    int isGreaterThan=(x>y);
    int isEqual=(x==y);
    int isNotEqual=(x!=y);

    printf("is x greater than y? %s\n", isGreaterThan ? "yes":"no");
    printf("is x equal to y? %s\n", isEqual ? "yes":"no");
    printf("is x not equal to y? %s\n", isNotEqual? "yes":"no");


    return 0;


}
