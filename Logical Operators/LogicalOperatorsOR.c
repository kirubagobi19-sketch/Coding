#include <stdio.h>
int main()
{

    int temp = 20;

    if (temp <= 0 || temp >= 30)
    {
        printf("The temperature is BAD");
    }
    else
    {
        printf("The temperature is GOOD");
    }
    return 0;
}