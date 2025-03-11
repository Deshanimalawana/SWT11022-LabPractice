#include <stdio.h>
int main () {
    int num;
    int remainder = num%2;
    printf("Enter a number:",num);
    scanf ("%d",&num);

    if (remainder==0)
    {
        printf ("Number is even",remainder);
    }
    else
    {
        printf("Number is odd",remainder);
    }

  return 0;
}
