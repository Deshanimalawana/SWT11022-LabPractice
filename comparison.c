#include<stdio.h>
int main () {
int x = 10, y=4;
int isGreaterThan = (x>y);
int isEqual = (x == y);
int isNotEqual = (x != y);

printf("Is x greater than y? %s\n",isGreaterThan ? "Yes" : "No");
printf("Is x equal to Y? %s\n",isEqual ? "yes" : "No");
printf("Is x not equal to y? %s\n", isNotEqual ? "yes" : "No");

return 0;
}
