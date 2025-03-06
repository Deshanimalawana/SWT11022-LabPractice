#include <stdio.h>
int main (){

    int x = 10, y = 4;
    int isgreaterthan = (x>y);
    int isequal = (x == y);
    int isnotequal = (x != y);

    printf("Is x greater than Y?: %s\n", isgreaterthan ? "Yes" : "No");
    printf("Is x equal to Y?: %s\n", isequal ? "Yes" : "No");
    printf("Is x is not equal to Y?: %s\n", isnotequal ? "Yes" : "No");

    return 0;


}
