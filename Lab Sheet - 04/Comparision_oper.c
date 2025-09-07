#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10,y = 4;
    int isGreaterThan = (x > y);
    int isEqual = (x == y);
    int isNotEqual = (x != y);

    printf("Is x Greater than Y? %s\n",isGreaterThan ? "Yes" : "No");
    printf("Is x Equal to y? %s\n",isEqual ? "Yes" : "No");
    printf("Is x Not Equal to y? %s",isNotEqual ? "Yes" : "No");
    return 0;


}
