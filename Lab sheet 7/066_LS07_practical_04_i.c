#include <stdio.h>
int main()
{
    int firsteven=0;

    //Loop to find the first even number in a sequence
    for (int i=1; ; i++)
    {
        if (i%2==0)
        {
            firsteven=1;
            break; // Exit loop when the first even number is found
        }
    }
    printf("The first number is: %d\n",firsteven);

    return 0;
}
