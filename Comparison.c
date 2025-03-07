#include <stdio.h>
int main(){
int x = 10, y = 5;
int isgreaterthan = (x>y);
int isequal = (x==y);
int isnotequal = (x!=y);

printf("Is x greaterthan y? %s\n", isgreaterthan ? "Yes": "No");
printf("Is x equal to y? %s\n", isequal ? "Yes": "No");
printf("Is x not equal to y? %s\n", isnotequal ? "Yes": "No");

return 0;

}
