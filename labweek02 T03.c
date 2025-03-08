 #include <stdio.h>

int main(){

    char name[20];
    int a, b;
    float c, f;
    char val[] = "Welcome";
    a = 10;
    const float x = 3.73;
    printf("Enter your name: ");
    scanf("%s", name);
    printf(val);
    printf("\nYour name is %s.", name);
    c = 90.0 * 3.0;
    printf("\nValue of c: %.2f", c);
    printf("\nValue of X: %.2f", x);
    printf("\nHello\tWorld\n");
    printf("You are learning \'c\' language\"Do you know C language\"");

    return 0;
}
