/* W02 LH 5. Formatted Input - scanf*/

#include<stdio.h>

int main(void){
    int age;
    double salary;
    char initial;

    printf("Enter age: ");
    scanf("%d", &age);        /* & is the address - of operator */

    printf("Enter salary: ");
    scanf("%lf", &salary);  /* use %lf for for double with scanf */

    printf("Enter initial: ");
    scanf(" %c", &initial);  /* space before %c skips whitespace */

    printf("Age: %d, Salary: %.2f, Initial: %c\n", age, salary, initial);

    return 0;
}