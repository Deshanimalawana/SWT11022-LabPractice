  #include <stdio.h>
int main (){

    int hours;
    float pay_rate;


    printf ("Enter Total Worked Hours:");
    scanf ( "%d", &hours);

    printf ("Enter Total Pay Rate Per Hour:");
    scanf ("%f", &pay_rate);
    printf("Enter Total Worked Hours: %d,Enter Total Pay Rate Pay Hour: %.2f\n",hours, pay_rate);

    float salary = hours*pay_rate;

    printf("My Salary Is: %.2f\n", salary);


    return 0;




}
