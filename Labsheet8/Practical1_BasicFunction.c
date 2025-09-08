#include <stdio.h>

int square (int nu){
return nu*nu;
}

int main (){
    int number=5;
    int result = square(number);
    printf("The Square of %d is %d",number,result);
    return 0;



}
