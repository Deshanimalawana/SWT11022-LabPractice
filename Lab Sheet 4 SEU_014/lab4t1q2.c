#include <stdio.h>
#include <stdbool.h>
int main(){

    bool rainy = 1;
    bool holiday = 0 ;
    bool weekend = 1;

    bool canGoOnTrip = (!rainy && (holiday || weekend));
    printf("Can the student go on a trip? %s\n", canGoOnTrip ? "Yes" : "No");

    int studentMarks = 80;
    studentMarks += 5;

    printf("Updated student marks: %d\n", studentMarks);

    return 0;

}
