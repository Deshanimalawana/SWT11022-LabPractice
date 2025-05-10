#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Rice = 'rice';
    int Quantty = 4;
    float Price = 76.99;

    float Total = (Quantty*Price);
    printf("Total Amount of:$%.2f\n",Total);

    printf("\ntotal:$%.2f\n",Quantty*Price);
    return 0;
}
