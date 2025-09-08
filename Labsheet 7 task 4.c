#include <stdio.h>

int main() {
  int n;

    while (1) {
    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Program stop \n");
      break;
    }

    printf("You entered: %d\n", n);
  }

  return 0;
}
