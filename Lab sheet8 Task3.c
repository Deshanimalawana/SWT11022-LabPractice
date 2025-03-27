#include <stdio.h>
int hcf (int A, int B);

int main() {
    int A,B;
    printf("Enter a number A: ");
    scanf("%d", &A);
    printf("Enter a number B: ");
    scanf("%d", &B);

    printf("GCD of %d and %d is %d.\n", A, B, hcf(A, B));
    return 0;
}

int hcf(int A, int B) {
   if (B!= 0)
       return hcf (B, A % B);
   else
       return A;

}
