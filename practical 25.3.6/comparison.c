#include<stdio.h>
int main()
{
    int x=10, y=4;
    int isgreaterthan = (x>y);
    int isequal=(x==y);
    int isnotequal=(x!=y);

    printf("is x greater than y?%s\n",isgreaterthan ? "yes" : "no");
    printf("is x equal to y?%s\n",isequal ? "yes" : "no");
    printf("is x not equal to y?%s\n",isnotequal ? "yes" : "no");
     return 0;
}

