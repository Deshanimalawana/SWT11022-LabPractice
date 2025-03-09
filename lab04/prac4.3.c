#include<stdio.h>

int mai(){
int x = 10, sum = 33;

printf("Initial x: %d\n", x);
++x;
printf("After Pre-increment: %d\n", x);

++x;
printf("After another Pre-increment: %d\n", x);

sum += x;
printf("Sum: %d\n", sum);

x++;
x++;
printf("Final x: %d\n", x);
printf("FInal sum: %d\n", sum);

return 0;
}
