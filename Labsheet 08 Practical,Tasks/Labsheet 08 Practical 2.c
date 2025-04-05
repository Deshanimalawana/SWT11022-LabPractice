#include <stdio.h>
int add(int a, int b){
    return a + b;
}
int main(){
    int x = 7, y =3;
    int sum = add(x, y);
    printf("%d + %d = %d\n", x, y, sum);
    return 0;
}
