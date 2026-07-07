#include <stdio.h>
#include <string.h>

int main (){

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";
    char FullName[50] = "";

    printf("Enter Your Age : ");
    scanf("%d", &age);

    printf("Enter Your GPA : ");
    scanf("%f", &gpa);

    printf("Enter Your Grade : ");
    scanf(" %c", &grade);

    printf("Enter Your Name : ");
    scanf("%s", &name);

    getchar();
    printf("Enter Your Full Name : ");
    fgets(name, sizeof(FullName), stdin);
    name[strlen(name) - 1] = '\0';


    printf("%d \n", age);
    printf("%.2f \n", gpa);
    printf("%c \n", grade);
    printf("%s \n", name);


    return 0;
}