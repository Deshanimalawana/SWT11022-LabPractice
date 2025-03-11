#include <stdio.h>
int main()
{
    int x;
    int y;
    int z;
    int Largest;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d",&x,&y,&z);

    if (x>=y && x>=z){
        Largest = x;
    }
    else if (y>=x && y>=z){
        Largest = y;
    }
    else {
        Largest = z;
    }
    printf("The Largest Number is: %d\n", Largest);
    return 0;
}
