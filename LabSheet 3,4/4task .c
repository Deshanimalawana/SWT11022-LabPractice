#include<stdio.h>
int main () {
    int X = 10, Y = 4;
    int isGreaterThan = (X > Y);
    int isEqual = (X == Y);
    int isNotEqual = (X != Y);

    printf ("is X greater than Y? %s\n",isGreaterThan ? "Yes" : "No");
    printf ("is X Equal to Y? %s\n",isEqual ? "Yes" : "No");
    printf ("is X not Equal  to Y? %s\n",isNotEqual ? "Yes" : "No");

    return 0;
}
