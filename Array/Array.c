#include <stdio.h>
int main()
{

    int numbers[] = {10, 20, 30, 40, 50};
    char grade[] = {'A', 'B', 'C', 'D', 'F'};
    char name[] = "Kobi Krish";

    numbers[0] = 100;
    numbers[1] = 50;
    numbers[2] = 30;
    numbers[3] = 20;
    numbers[4] = 10;

    printf("%d\n", numbers[0]);
    printf("%d\n", numbers[1]);
    printf("%d\n", numbers[2]);
    printf("%d\n", numbers[3]);
    printf("%d\n", numbers[4]);

    // printf("%c", grade[1]);
    // printf("%c", name[0]);

    return 0;
}