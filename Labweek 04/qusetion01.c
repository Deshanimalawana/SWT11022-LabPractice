#include<stdio.h>
    int main(){
        int x=10,y=25,z=20;
        int largestNumber;
        float average;

        largestNumber = (x>y) ? (x>z ? x:z) : (y>z ? y:z);
        average = (x+y+z)/3.0;
        printf("Large number: %d\n", largestNumber);
        printf("Average:%.2f\n",average);

        return 0;
}
