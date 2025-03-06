#include <stdio.h>

int main()
{
    int x = 10, y = 4;
    int isGreaterthan = (x>y);
    int isEqual = (x==y);
    int isNotEqual = (x!=y);

    printf("Is x greater than y? %s\n",isGreaterthan ? "Yes" : "No");
    printf("Is x equal to y? %s\n",isEqual ? "Yes" : "No");
    printf("Is x not equal to y? %s",isNotEqual ? "Yes" : "No");

    return 0;
}
