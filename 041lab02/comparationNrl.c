#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x= 10, y=4;
    int isGreaderthan = (x>y);
    int isEqual = (x==y);
    int isnotEqual = (x !=y);

    printf("Is x greader than y? %s\n", isGreaderthan ? "Yes" : "Not");
    printf("Is x equal to y? %s\n", isEqual? "Yes" : "No");
    printf("Is x not equal to y? %s\n", isnotEqual ? "Yes" :"Not");
    return 0;
}
