#include<stdio.h>

int main () {

    // arithmetic operators = + - * / % ++ --

    int x = 2;
    int y = 3;
    int z = 10;
    int A1 = 0;
    int A2 = 0;
    int A3 = 0;
    float A4 = 0;
    int A5 = 0;
    int P = 6;
    int Q = 9;
    int R = 4;
    int S = 7;
    int T = 5;
    int U = 4;

    A1 = x + y;
    A2 = x - y;
    A3 = x * y;
    A4 = x / y;
    A5 = z % y;

    P ++;       //Q = Q + 1
    Q --;      // P = P - 1 
    R +=5;    //  R = R + 5
    S -=4;   //   S = S - 4
    T *=2;  //    T = T * 2
    U /=2; //     U = U / 2


    
    printf("2 + 3 = %d \n", A1);
    printf("2 - 3 = %d \n", A2);
    printf("2 * 3 = %d \n", A3);
    printf("2 / 3 = %f \n", A4);
    printf("2 / 3 = %d \n\n", A5);
    printf("6 + 1 = %d \n", P);
    printf("9 - 1 = %d \n", Q);
    printf("4 + 5 = %d \n", R);
    printf("7 - 4 = %d \n", S);
    printf("5 * 2 = %d \n", T);
    printf("4 / 2 = %d \n", U);


    return 0;
}