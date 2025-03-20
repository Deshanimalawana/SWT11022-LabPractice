#include <stdio.h>
int main () {
    int dayofweek =3;

    switch (dayofweek) {
       case 1:
          printf("Monday\n");
          break;
        case 2:
          printf("Tuesday\n");
          break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("other days\n");
    }
    return 0;

}
