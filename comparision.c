#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10, y=4;
    int isGreaterthen=(x>y);
    int isEqual=(x==y);
    int isNotEqual=(x!=y);

    printf("Is x greater than y? %s\n",isGreaterthen ? "yes": "no");
    printf("Is x equal to y? %s\n",isEqual ? "yes" :"no");
    printf("Is x not equal y? %s\n",isNotEqual ? "yes": "no");
    return 0;
}
