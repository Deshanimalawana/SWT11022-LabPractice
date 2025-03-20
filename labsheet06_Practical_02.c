#include <stdio.h>
int main(){
    int dayOfWeek =3;

    switch (dayOfWeek){
        case 1:
            printf("monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("wednesday");
            break;
        default:
            printf("other day");
            break;
    }
    return 0;
}
