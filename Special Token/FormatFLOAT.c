#include<stdio.h>

int main(){

    // width

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;
    
    printf("%f\n", price1);
    printf("%f\n", price2);
    printf("%f\n\n", price3);

    printf("%.2f\n", price1);
    printf("%.2f\n", price2);
    printf("%.2f\n\n", price3);

    printf("%.1f\n", price1);
    printf("%.1f\n", price2);
    printf("%.1f\n\n", price3);

    printf("%+7.2f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);

    return 0;
}