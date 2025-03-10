#include<stdio.h>
int main(){

    int x=10,y=4;
    int isGreaterThan=(x>y);
    int isEqual=(x==y);
    int isNotEqual=(x!=y);

    printf("Is X Greater Than Y?: %s\n", isGreaterThan? "Yes":"No");
    printf("Is X Equal Y?: %s\n", isEqual? "Yes":"No");
    printf("Is X Not Equal Y?: %s\n", isNotEqual? "Yes":"No");

return 0;
}
