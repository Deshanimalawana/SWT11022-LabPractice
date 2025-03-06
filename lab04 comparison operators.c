#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x= 10, y =4 ;
    int isGreaterThan =(x > y);
    int isEqual=(x==y);
    int isNotEqual =(x!=y);

    printf("is x greater than y? %s\n", isGreaterThan ? "yes":"NO");
    printf("is x equal to y? %s\n",isEqual? "yes":"NO");
    printf("is x not equal to y? %s\n", isNotEqual  ? "yes":"NO");
    return 0;
}
