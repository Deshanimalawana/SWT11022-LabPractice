#include <stdio.h>
int main(){
    int isRainy = 0;
    int isHoliday = 1;
    int isWeekend = 0;

    int result = (!isRainy) && (isHoliday || isWeekend);
    printf("Can the student go on a trip?: %s\n",result ? "yes":"no");

    int marks = 50;
    marks +=5;
    printf("updated marks:%d\n",marks);

    return 0;
}
Challenges:
- Understanding the precedence of different operators.
- Correctly implementing the ternary operator for decision-making.
- Properly displaying binary representations of integers.
- Ensuring logical conditions are correctly evaluated.

Conclusion:
This lab provided hands-on experience with various operators in C. It reinforced the importance of operator precedence, logical conditions, and bitwise manipulations in programming. By completing the exercises, students gained a deeper understanding of C programming constructs and their applications in problem-solving.

References:
1. W3Schools. (n.d.). C Operators. Retrieved from https://www.w3schools.com/c/c_operators.php
2. IEEE Citation Generator. (n.d.). Retrieved from https://www.ieee.org/publications/standards/citation-guidelines.html
*/
