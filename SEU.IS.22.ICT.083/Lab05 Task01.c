#include <stdio.h>
int main () {
    int num;
    printf("Enter a number:",num);
    scanf ("%d",&num);
    int remainder = (num%2);
    if (remainder==0)
    {
        printf ("The number is even.",remainder);
    }
    else
    {
        printf("The number is odd.",remainder);
    }

  return 0;
}
