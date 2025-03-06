#include <stdio.h>
int main(){

    int x = 10 ,y = 4;
    int isGraderThan = (x>y);
    int isEqual = (x == y);
    int isNotEqual = (x != y);

    printf("IS X Grader than Y ? %s \n",isGraderThan ? "Yes" : "No");
    printf("IS X Equal to Y ? %s \n",isEqual ? "Yes" : "No");
    printf("IS X NOt Equal to Y ? %s \n",isNotEqual ? "Yes" : "No");

    return 0;



}
