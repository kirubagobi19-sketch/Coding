#include <stdio.h>
#include <string.h>

void happyBirthday(char name[], int age)
{
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s", name);
    printf("Happy birthday to you!");
    printf("\nYou are %d years old \n", age);
}

int main()
{
    // function = A reusable section of code that can be inoved "called"
    //            Arguments can be sent to a function so that it can use them

    char name[50];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // fgets is a function used for get strings
    name[strlen(name) - 1];

    printf("Enter your age: ");
    scanf("%d", &age);

    happyBirthday(name, age);

    return 0;
}