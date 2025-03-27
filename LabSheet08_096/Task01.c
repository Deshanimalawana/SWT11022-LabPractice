#include <stdio.h>

int isPrime(int num) {
if(num<=1)
    return 0;
int i=2;
while(i<num) {
    if(num % i==0)
        return 0;
    i++;
}
 return 1;
}
int main() {
    while(1) {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if (isPrime(num)) {
        printf("%d is a prime\n",num);
    }
    else {
        printf("%d is not a prime\n",num);
    }
    }


return 0;

}




