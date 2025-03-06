#include<stdio.h>
int main()
{

    int x=10, y=4;
    int isGreaterthen=(x>y);
    int isEqual= (x==y);
    int isNotEqual= (x!=y);

    printf("is x is greater then y? %s\n",isGreaterthen ?"Yes":"No");
    printf("is x is equal to y? %s\n",isEqual ?"Yes":"No");
    printf("is x is not equal to y? %s\n",isNotEqual ?"Yes":"No");
    return 0;

}
