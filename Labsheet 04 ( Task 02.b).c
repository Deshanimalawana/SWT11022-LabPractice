#include <stdio.h>
#include<stdbool.h>
int main(){
    bool isRainy, isHoliday, isWeekend;

    isRainy = true;
    isHoliday = false;
    isWeekend = true;

    printf("Is it rainy?%s\n",isRainy? "Yes" : "No");
    printf("Is it holiday?%s\n",isHoliday? "Yes" : "No");
    printf("Is it weekend?%s\n",isWeekend? "Yes" : "No");

    return 0;
}
