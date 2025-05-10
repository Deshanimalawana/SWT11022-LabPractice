#include <stdio.h>
int add (int a ,int b) {
    return a + b;
}

int main ()
{
    int x , y;
    printf("Enter Two Numbers :- ");
    scanf("%d %d", &x,&y);
    int sum = add(x ,y);
    printf("The Sum value of %d + %d = %d\n", x,y,sum);
    return 0;
}
