/*Lab 4 Exercise 04*/

#include<stdio.h>
int main (){

    int x = 5;
    if (x == 0)
        printf("Zero\n");
    else
        printf("Non-Zero\n");

    switch (x) {
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
    }

}