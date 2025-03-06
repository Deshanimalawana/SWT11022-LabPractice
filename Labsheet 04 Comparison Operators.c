#include <stdio.h>
int main(){
    int x = 10,y = 4;
    int isGreterthan = (x>y);
    int isEqual = (x==y);
    int isNotEqual = (x!=y);

    printf("Is x grater than y? %s\n", isGreterthan ? "yes" : "no");
    printf("Is x equal to y? %s\n", isEqual ? "yes" : "no");
    printf("Is x not equal y? %s\n", isNotEqual ? "yes" : "no");

    return 0;
}
