#include <stdio.h>

int main(){

    int age;

    printf("Enter Your Age: ");
    scanf("%d", &age);

    printf("Your age is %d \n", age);

    if (age > 75){
        printf("You are a Senior ");
    }
    else if(age >= 18){
        printf("You are an adult ");
    }
    else if(0 < age < 18){
        printf("You are a Child ");
    }
    
    else if(age == 0){
        printf("You are a new born ");
    }
    else {
        printf("you haven't born yet ");
    }

    return 0;

}