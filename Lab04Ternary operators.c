#include<stdio.h>
int main()
{
    int value=6;
    char results =(value %2==0)? 'E':'o';
    printf("value is %c (E:Even,o: odd)\n",results);
    return 0;
}
