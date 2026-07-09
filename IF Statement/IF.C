#include<stdio.h>

int main (){

    int age = 90;

    if(age >= 65){
        printf("You are a Senior");
    }
    else if (age >= 18){
        printf("You are an adult");
    }
    
    else if(age < 0){
        printf("You haven't been born yet");
    }
    else if(age == 0){
        printf("You are a new born");
    }
    else{
        printf("You are a child");
    }


    return 0;
}