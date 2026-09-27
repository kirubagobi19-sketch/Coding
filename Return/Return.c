#include <stdio.h>

double cube(double num)
{
    return (num * num * num);
}

int main()
{

    int x = cube(2);
    int y = cube(3);
    int z = cube(4);

    printf("%d \n", x);
    printf("%d \n", y);
    printf("%d \n", z);

    return 0;
}