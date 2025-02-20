int main() {
    float rate;
    int hour;
    float salary;

    printf("Enter your worked hour: ");
    scanf("%d", &hour);

    printf("Enter your rate per hour: ");
    scanf("%f", &rate);

    salary = rate * hour;


    printf("Your worked hours: %d\n", hour);
    printf("Your rate per hour: %.2f\n", rate);
    printf("Your salary is: %.2f", salary);

    return 0;
}
