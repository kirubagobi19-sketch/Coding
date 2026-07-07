#include<stdio.h>
int main(){ 

// width

int num1 = 1;
int num2 = 10;
int num3 = 100;
int num4 = -100;

printf("%d\n", num1);
printf("%d\n", num2);
printf("%d\n", num3);

printf("%4d\n", num1);
printf("%4d\n", num2);
printf("%4d\n", num3);

printf("%-4d\n", num1);
printf("%-4d\n", num2);
printf("%-4d\n", num3);

printf("%04d\n", num1);
printf("%04d\n", num2);
printf("%04d\n", num3);

printf("%+d\n", num1);
printf("%+d\n", num2);
printf("%+d\n", num3);
printf("%+d\n", num4);

    return 0;
}