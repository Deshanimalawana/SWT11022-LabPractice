#include <stdio.h>
int main(){

    int x=11 , y=6 ;

    int bitwiseANDResult = x & y;
    int bitwiseORResult = x | y;
    int bitwiseXORResult = x ^ y;

    printf("Bitwise AND Result is = %d\n",bitwiseANDResult);
    printf("Bitwise OR Result is = %d\n",bitwiseORResult);
    printf("Bitwise XOR Result is = %d\n",bitwiseXORResult);


return 0;
}
