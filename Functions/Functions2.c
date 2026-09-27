#include <stdio.h>

void happyBirthday(char name[], int age)
{
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s", name);
    printf("\nHappy birthday to you!");
    printf("\nYou are %d years old \n", age);
}

int main()
{
    // function = A reusable section of code that can be inoved "called"
    //            Arguments can be sent to a function so that it can use them

    char name[] = "Kobi";
    int age = 25;

    happyBirthday(name, age);

    return 0;
}