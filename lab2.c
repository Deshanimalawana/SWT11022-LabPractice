#include <stdio.h>
int main() {
    int x = 10 , y = 15;
    int isGreaterThan = (x>y);
    int isEqual = (x==y);
    int isNotEqual = (x!=y);

    printf("is x greater than y? %s\n" , isGreaterThan ? "Yes" : "No");

    printf("is x equal to y? %s\n" , isEqual ?  "Yes" : "No");
    printf("is x not equal to y? %s\n" , isNotEqual ? "Yes" : "No");

    return 0;
}
