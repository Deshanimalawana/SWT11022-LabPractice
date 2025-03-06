#include <stdio.h>
int main()
{
    int x = 10, y = 4;
    int isGreaterThan = (x > y);
    int isEqual = (x == y);
    int inNotEqual = (x != y);

    printf("Is Greater than y? %s\n",isGreaterThan ? "yes" : "No");
    printf("Is x equal to y? %s\n",isEqual? "yes" : "No");
    printf("Is x not equal to y? %s\n",inNotEqual ? "yes" : "No");
    return 0;
}
